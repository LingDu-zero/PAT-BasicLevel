#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char c[13][5] = { "tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
	char j[13][4] = { "","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
	int n, num = 0;
	scanf("%d", &n);
	while (getchar() != '\n') continue;
	while (n--) {
		char e[9];
		gets(e);
		if (isdigit(e[0])) {
			int x = atoi(e);
			printf("%s", j[x / 13]);
			if (x / 13 && x % 13) printf(" %s\n", c[x % 13]);
			else if (!(x / 13)) printf("%s\n", c[x % 13]);
			else if (!(x % 13)) printf("\n");
		}
		else {
			char temp[5] = "\0\0\0\0";
			for (int i = 0, m = 0; i <= strlen(e); i++) {
				if (e[i] != ' '&&e[i] != '\0') temp[m++] = e[i];
				else {
					for (int k = 0; k < 13; k++) {
						if (strcmp(temp, c[k]) == 0) {
							num = num + k;
							break;
						}
					}
					for (int k = 0; k < 13; k++) {
						if (strcmp(temp, j[k]) == 0) {
							num = num + k * 13;
							break;
						}
					}
					m = 0;
				}
			}
			printf("%d\n", num);
			num = 0;
		}
	}
  
	return 0;
}
