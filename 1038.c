#include <stdio.h>

int main(void)
{
	long n;
  	int c;
	int s[101] = { 0 };
	scanf("%ld", &n);
	while (n--) {
		scanf("%d", &c);
		s[c] += 1;
	}
	scanf("%ld", &n);
	while (n--) {
		scanf("%d", &c);
		printf("%d", s[c]);
		if (n == 0)continue;
		printf(" ");
	}

	return 0;
}
