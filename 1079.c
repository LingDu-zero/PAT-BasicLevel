#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1001],str1[1001],str2[1001];
	scanf("%s", str);
	strcpy(str1, str);
	strcpy(str2, str);
	for (int i = 0; i < strlen(str2) / 2; i++) {
		char temp = str2[i];
		str2[i] = str2[strlen(str2) - 1 - i];
		str2[strlen(str2) - i - 1] = temp;
	}
	int k = 0;
	while (strcmp(str1, str2) && k < 10) {
		int d = 0, i;
		for (i = 0; i < strlen(str); i++) {
			int x;
			x = str1[i] + str2[i] - '0' - '0';
			if (d) {
				x += 1;
				d = 0;
			}
			if (x / 10) {
				x %= 10;
				d = 1;
			}
			str[i] = x + '0';
		}
		if (d) {
			str[i] = 1 + '0';
			str[i + 1] = '\0';
		}
		printf("%s + %s = ", str1, str2);
		strcpy(str2, str);
		for (int i = 0; i < strlen(str) / 2; i++) {
			char temp = str[i];
			str[i] = str[strlen(str) - i - 1];
			str[strlen(str) - i - 1] = temp;
		}
		printf("%s\n", str);
		strcpy(str1, str);
		k++;
	}
	if (k == 10) printf("Not found in 10 iterations.\n");
	else printf("%s is a palindromic number.\n", str);

	return 0;
}
