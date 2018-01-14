#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[1001];
	int c, x = 0;
	scanf("%s %d", s, &c);
	int m = s[0] - '0';
	if (m < c) x = m;
	else {
		printf("%d", m / c);
		x = m%c;
	}
	for (int i = 1; i < strlen(s); i++) {
		m = s[i] - '0' + x * 10;
		printf("%d", m / c);
		x = m%c;
	}
	printf(" %d", x);

	return 0;
}
