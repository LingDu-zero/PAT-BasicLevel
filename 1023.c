#include <stdio.h>

int main(void)
{
	int x[10];
	for (int i = 0; i < 10; i++) scanf("%d", &x[i]);
	for (int i = 1; i < 10;i++)
		if (x[i] != 0) {
			printf("%d", i);
			x[i]--;
			break;
		}
	for (int i = 0; i < 10;i++)
		while (x[i]) {
			printf("%d", i);
			x[i]--;
		}

	return 0;
}
