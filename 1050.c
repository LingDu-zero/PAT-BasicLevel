#include <stdio.h>
#include <math.h>

int cmp(const void* a, const void* b) {
	return *(int *)b - *(int *)a;
}

void findmn(int *m, int *n, int N) {
	*m = ceil(sqrt(N));
	*n = sqrt(N);
	while ((*m)*(*n) != N) {
		if ((*m)*(*n) > N) (*n)--;
		if ((*m)*(*n) < N) (*m)++;
	}
}

int main(void)
{
	int N, m, n;
	scanf("%d", &N);
	int arr[10001];
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), cmp);
	findmn(&m, &n, N);
	int **twoD;
	twoD = (int **)malloc(sizeof(int *)*m);
	for (int i = 0; i < m; i++) twoD[i] = (int *)malloc(sizeof(int)*n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) twoD[i][j] = 0;
	int i = 0, j = 0, k = 0;
	while (k < N) {
		for (; j < n; j++) {
			if (twoD[i][j] == 0) twoD[i][j] = arr[k++];
			else break;
		}
		j--;
		i++;
		for (; i < m; i++) {
			if (twoD[i][j] == 0) twoD[i][j] = arr[k++];
			else break;
		}
		i--;
		j--;
		for (; j >= 0; j--) {
			if (twoD[i][j] == 0) twoD[i][j] = arr[k++];
			else break;
		}
		j++;
		i--;
		for (; i >= 0; i--) {
			if (twoD[i][j] == 0) twoD[i][j] = arr[k++];
			else break;
		}
		i++;
		j++;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j) printf(" %d", twoD[i][j]);
			else printf("%d", twoD[i][j]);
		}
		printf("\n");
	}

	return 0;
}
