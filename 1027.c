#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, k;
	char c;
	scanf("%d %c", &n, &c);
	k = sqrt((n + 1) * 2) - 1;
	k = k % 2 ? k : k - 1;
	for (int i = 0; i < k / 2 + 1; i++) {
		for (int j = 0; j < i; j++) printf(" ");
		for (int j = i; j < k - i; j++) printf("%c", c);
		for (int j = k - i; j < k; j++) printf(" ");
		printf("\n");
	}
	for (int i = k / 2 + 1; i < k; i++) {
		for (int j = 0; j < k - 1 - i; j++) printf(" ");
		for (int j = k - 1 - i; j < i + 1; j++) printf("%c", c);
		for (int j = i + 1; j < k + 1; j++) printf(" ");
		printf("\n");
	}
	printf("%d", n + 1 - (k + 1)*(k + 1) / 2);

	return 0;
}
