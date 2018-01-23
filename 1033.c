#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int a[128] = { 0 },b;
	while ((b = getchar()) != '\n') {
		a[b] = 1;
		a[tolower(b)] = 1;
	}
	if (a['+'])
		for (int i = 'A'; i <= 'Z'; i++)
			a[i] = 1;
	while ((b = getchar()) != '\n') {
		if (a[b]) continue;
		printf("%c", b);
	}

	return 0;
}
