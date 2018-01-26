#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	int a[128] = { 0 };
	while ((c = getchar()) != '\n') a[tolower(c)]++;
	c = 'a';
	for (int i = 'b'; i <= 'z'; i++) {
		if (a[i] > a[c]) c = i;
	}
	printf("%c %d", c, a[c]);

	return 0;
}
