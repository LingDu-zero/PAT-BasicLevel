#include <stdio.h>

int cmp(const void* a, const void* b) {
	return *(int *)a - *(int *)b;
}

int main(void)
{
	int n;
	int arr[10000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), cmp);
	int l = arr[0];
	for (int i = 1; i < n; i++)
		l = (l + arr[i]) / 2;
	printf("%d\n", l);

	return 0;
}
