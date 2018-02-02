#include <stdio.h>

int main(void)
{
	int n;
	int pass[100];
	scanf("%d", &n);
	char c, a;
	getchar();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%c-%c", &c, &a);
			if (a == 'T') pass[i] = c - 'A' + 1;
			getchar();
		}
	}
	for (int i = 0; i < n; i++) printf("%d", pass[i]);

	return 0;
}
