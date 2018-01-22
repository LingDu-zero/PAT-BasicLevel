#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char w[100001], t[100001];
	int flag = 0, c, p = 0;
	scanf("%s\n%s", w, t);
	for (int i = 0; i < strlen(w); i++) {
		if (w[i] == '.' || w[i] == '+' || w[i] == ',' || w[i] == '-') {
			flag = 1;
			break;
		}
	}
	for (int i = 0; i < strlen(t); i++) {
		c = 0;
		if (isupper(t[i]) && flag) continue;
		for (int j = 0; j < strlen(w); j++) {
			if (toupper(t[i]) == w[j]) {
				c = 1;
				break;
			}
		}
		if (c) continue;
		p = 1;
		printf("%c", t[i]);
	}
	if (!p) printf("\n");

	return 0;
}
