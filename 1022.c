#include <stdio.h>

void solution(int x, int d) {
	if (x / d == 0) printf("%d", x);
	else {
		solution(x / d, d);
		printf("%d", x%d);
	}
}

int main(void)
{
	int x, y;
	int d;
	scanf("%d %d %d", &x, &y, &d);
	solution(x + y, d);

	return 0;
}
