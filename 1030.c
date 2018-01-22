#include <stdio.h>

int cmp(const void*a, const void*b)  
{
	return *(long long*)a - *(long long*)b;
}

int main(void)
{
	long long arr[100001];
	long long n, p, k = 0;
	scanf("%lld %lld", &n, &p);
	for (long long i = 0; i < n; i++) scanf("%lld", &arr[i]);
	qsort(arr, n, sizeof(arr[0]), cmp);
	for (long long i = 0; i < n - k; i++) {
		for (long long j = i + k - 1; j < n; j++) {
			if (arr[j] > p*arr[i]) {
				k = j - i;
				break;
			}
		}
	}
	printf("%lld", k);

	return 0;
}
