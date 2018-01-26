#include <stdio.h>

int main(void)
{
	int n;
	char c;
	scanf("%d %c", &n, &c);
	for (int i = 0; i < (n % 2 ? (n + 1) / 2 : n / 2); i++) {
		if (i == 0 || i == (n % 2 ? (n + 1) / 2 - 1 : n / 2 - 1)) {
			for (int j = 0; j < n; j++) printf("%c", c);
			printf("\n");
		}
		else {
			printf("%c", c);
			for (int j = 0; j < n - 2; j++) printf(" ");
			printf("%c\n",c);
		}
	}

	return 0;
}
