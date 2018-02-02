#include <stdio.h>
#include <string.h>

int main(void)
{
	char c, str[1001];
	scanf("%c", &c);
	getchar();
	gets(str);
	if (c == 'C') {
		int c = 0;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == str[i + 1]) c++;
			else {
				if (c) printf("%d%c", c + 1, str[i]);
				else printf("%c", str[i]);
				c = 0;
			}
		}
		printf("\n");
	}
	else {
		for (int i = 0; i < strlen(str); i++) {
			int sum = 0;
			while (str[i] <= '9'&&str[i] >= '0') {
				sum = sum * 10 + str[i] - '0';
				i++;
			}
			for (int j = 0; j < sum; j++) printf("%c", str[i]);
			if (sum == 0) printf("%c", str[i]);
		}
		printf("\n");
	}

	return 0;
}
