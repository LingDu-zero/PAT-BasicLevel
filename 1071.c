#include <stdio.h>

int main(void)
{
	int T, K;
	scanf("%d %d", &T, &K);
	while (K--) {
		int n1, b, t, n2;
		scanf("%d %d %d %d", &n1, &b, &t, &n2);
		if (T == 0) {
			printf("Game Over.\n");
			return 0;
		}
		if (T < t) {
			printf("Not enough tokens.  Total = %d.\n", T);
			continue;
		}
		if ((n1>n2&&b == 0) || (n1 < n2&&b == 1)) {
			T += t;
			printf("Win %d!  Total = %d.\n", t, T);
		}
		else {
			T -= t;
			printf("Lose %d.  Total = %d.\n", t, T);
		}
	}

	return 0;
}
