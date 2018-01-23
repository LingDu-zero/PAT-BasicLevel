#include <stdio.h>

int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

void s(int n, int* large, int* low) {
	int a[4];
	a[0] = n / 1000;
	a[1] = n / 100 % 10;
	a[2] = n / 10 % 10;
	a[3] = n % 10;
	qsort(a, 4, sizeof(int), cmp);
	(*low) = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
	(*large) = a[0] + a[1] * 10 + a[2] * 100 + a[3] * 1000;
}

int main(void)
{
	int n, large, low;
	scanf("%d", &n);
	if (n % 1111 == 0) {
		printf("%04d - %04d = 0000", n, n);
		return 0;
	}
	do {
		s(n, &large, &low);
		n = large - low;
		printf("%04d - %04d = %04d\n", large, low, n);
	} while (n != 6174);

	return 0;
}
