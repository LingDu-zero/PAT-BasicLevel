#include <stdio.h>

int main(void)
{
	int n, c, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &c);
		sum += c;
	}
	printf("%d\n", sum * 11 * (n - 1));

	return 0;
}
