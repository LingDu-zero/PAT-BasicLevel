#include <stdio.h>

int cmp(const void* a, const void* b) {
	return *(int *)b - *(int *)a;
}

int main(void)
{
	int n, arr[100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), cmp);
	int e;
	for (e = 0; e < n; e++)
		if ((e + 1) >= arr[e]) break;
	printf("%d\n", e);

	return 0;
}
