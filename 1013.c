#include <stdio.h>

bool test(int n);

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	int k = 1;
	if (n == 1) {
		printf("2 ");
	}
	for (int i = 3; k < m; i += 2) {
		if (test(i)) {
			k++;
			if (k >= n) {
				printf("%d", i);
				if ((k - n + 1) % 10 == 0) printf("\n");
				else if (k < m) printf(" ");
			}
		}
	}

	return 0;
}

bool test(int n) {
	int x = 3;
	while (x*x <= n) {
		if (n%x++ == 0) return false;
	}
	return true;
}
