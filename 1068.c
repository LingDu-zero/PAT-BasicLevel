#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n, x = 0, y = 0, flag = 0, f = 0;
	int **a;
	long tol;
	scanf("%d %d %ld", &m, &n, &tol);
	long long **arr;
	arr = (long long **)malloc(sizeof(long long)*(n + 4));
	a = (int **)malloc(sizeof(int)*(n + 4));
	for (int i = 0; i < n + 2; i++) {
		arr[i] = (long *)malloc(sizeof(long long)*(m + 4));
		a[i] = (int *)malloc(sizeof(int)*(m + 4));
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			scanf("%ld", &arr[i][j]);
		}
	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < m + 1; j++)
			a[i][j] = 0;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			if (a[i][j] != 1) {
				for (int i1 = i; i1 < n + 1; i1++) {
					for (int j1 = 1; j1 < m + 1; j1++) {
						if (i1 == i&&j1 == j) continue;
						if (arr[i][j] == arr[i1][j1]) a[i][j] = a[i1][j1] = 1;
					}
				}
			}
		}
	}
	for (int i = 0; i <= m + 1; i++) arr[0][i] = -tol - 1;
	for (int i = 0; i <= n + 1; i++) arr[i][m + 1] = -tol - 1;
	for (int i = 0; i <= m + 1; i++) arr[n + 1][i] = -tol - 1;
	for (int i = 0; i <= n + 1; i++) arr[i][0] = -tol - 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!a[i][j]) {
				f = 0;
				for (int i1 = i - 1; i1 <= i + 1; i1++) {
					for (int j1 = j - 1; j1 <= j + 1; j1++) {
						if (i1 == i&&j1 == j) continue;
						if (llabs(arr[i][j] - arr[i1][j1]) <= tol) f = 1;
					}
				}
				if (!f&&flag) {
					printf("Not Unique\n");
					return 0;
				}
				else if(!f) {
					flag = 1;
					x = j;
					y = i;
				}
			}
		}
	}
	if (flag) printf("(%d, %d): %ld\n", x, y, arr[y][x]);
	else printf("Not Exist\n");
	return 0;
}
