#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int m = n / 100;
	n = n - m * 100;
	while (m--) printf("B");
	m = n / 10;
	n = n - m * 10;
	while (m--) printf("S");
	while (n) printf("%d", n--);

	return 0;
}
