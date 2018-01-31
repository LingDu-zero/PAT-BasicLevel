#include <stdio.h>
#include <math.h>

int main(void)
{
	int m, n, x = 0, y = 0, flag = 0, f = 0;
	int a[1<<24] = { 0 };
	int tol;
	scanf("%d %d %d", &m, &n, &tol);
	int arr[1002][1002];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			scanf("%d", &arr[i][j]);
			a[arr[i][j]]++;
		}
	for (int i = 0; i <= m + 1; i++) arr[0][i] = -tol - 1;
	for (int i = 0; i <= n + 1; i++) arr[i][m + 1] = -tol - 1;
	for (int i = 0; i <= m + 1; i++) arr[n + 1][i] = -tol - 1;
	for (int i = 0; i <= n + 1; i++) arr[i][0] = -tol - 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[arr[i][j]] == 1) {
				f = 0;
				for (int i1 = i - 1; i1 <= i + 1; i1++) {
					for (int j1 = j - 1; j1 <= j + 1; j1++) {
						if (i1 == i&&j1 == j) continue;
						if (abs(arr[i][j] - arr[i1][j1]) <= tol) f = 1;
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
	if (flag) printf("(%d, %d): %d\n", x, y, arr[y][x]);
	else printf("Not Exist\n");
	return 0;
}
