#include <stdio.h>

void reverse(int *a, int n, int m);

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	while (m > n) m %= n;
	int *a;
	a = (int *)malloc(n*sizeof(int));
	for (int i = 0; i < n;) {
		a[i] = getchar() - '0';
		if (a[i] >= 0 && a[i] < 10) i++;
	}
	reverse(a, 0, n - m - 1);
	reverse(a, n - m, n - 1);
	reverse(a, 0, n - 1);
	
	printf("%d", a[0]);
	for (int i = 1; i < n; i++) printf(" %d", a[i]);

	return 0;
}

void reverse(int *a, int n, int m) {
	for (int i = n; i <= (n + m) / 2; i++) {
		int temp = a[i];
		a[i] = a[m + n - i];
		a[m + n - i] = temp;
	}
}
