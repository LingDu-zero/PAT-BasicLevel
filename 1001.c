#include <stdio.h>

int main(void)
{
	int n;
	int k = 0;
	scanf("%d", &n);
	while (n - 1) {
		if (n % 2 == 0) n /= 2;
		else n = (3 * n + 1) / 2;
		k++;
	}
	printf("%d", k);

	return 0;
}
