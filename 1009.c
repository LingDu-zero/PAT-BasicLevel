#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[81];
	gets(s);
	int x = strlen(s) - 1;
	for (int i = x; i > -1; i--) {
		if (s[i] != ' ') continue;
		for (int j = i + 1; j <= x; j++) printf("%c", s[j]);
		printf(" ");
		x = i - 1;
	}
	for (int i = 0; i <= x; i++) printf("%c", s[i]);

	return 0;
}
