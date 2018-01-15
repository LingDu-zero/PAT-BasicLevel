#include <stdio.h>
#include <string.h>

int main(void)
{
	int c[10] = { 0 };
	char s[1001];
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) c[s[i] - '0']++;
	for (int i = 0; i < 10; i++)
		if (c[i]) printf("%d:%d\n", i, c[i]);

	return 0;
}
