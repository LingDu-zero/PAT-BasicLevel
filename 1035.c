#include <stdio.h>

int isinsert(int *a, int *b, int n) {
	int i;
	for (i = 0; i < n; i++)
		if (b[i]>b[i + 1]) break;
	for (i++; i < n; i++)
		if (a[i] != b[i]) break;
	if (i == n) return 1;
	return 0;
}

int cmp(const void* a, const void* b) {
	return *(int *)a - *(int *)b;
}

void printarr(int *a, int n) {
	for (int i = 0; i < n - 1; i++)
		printf("%d ", a[i]);
	printf("%d", a[n - 1]);
}

int main(void)
{
	int n, a[101], b[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n; i++) scanf("%d", &b[i]);
	if (isinsert(a, b, n)) {
		int i;
		for (i = 0; i < n; i++)
			if (b[i]>b[i + 1]) break;
		qsort(b, i + 2, sizeof(b[0]), cmp);
		printf("Insertion Sort\n");
		printarr(b, n);
	}
	else {
		int k = 1, flag = 1;
		while (flag) {
			flag = 0;
			for (int j = 0; j < n; j++)
				if (a[j] != b[j]) flag = 1;
			for (int j = 0; j < n / k; j++)
				qsort(a + j*k, k, sizeof(int), cmp);
			qsort(a + n - n%k, n%k, sizeof(int), cmp);
			k *= 2;
		}
		printf("Merge Sort\n");
		printarr(a, n);
	}

	return 0;
}
