#include <stdio.h>

int cmp(const void* a, const void* b) {
	return *(long long*)a > *(long long*)b ? 1 : -1;
}

int main(void)
{
	long long n;
	long long a[100001], b[100001];
	scanf("%lld", &n);
	for (long long i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
		b[i] = a[i];
	}
	qsort(b, n, sizeof(long long), cmp);
	long long max = 0, count = 0;
	long long s[100001];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) max = a[i];
		if (a[i] == b[i] && max == a[i]) s[count++] = max;
	}
	printf("%lld\n", count);
	for (long long i = 0; i < count; i++) {
		if (i) printf(" %lld", s[i]);
		else printf("%lld", s[i]);
	}
	printf("\n");

	return 0;
}
