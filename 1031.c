#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int q[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char e[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int flag = 0, c, n;
	char s[100][19];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%s", &s[i]);
	for (int i = 0; i < n; i++) {
		int j;
		c = 0;
		for (j = 0; j < 17; j++) {
			if (isalnum(s[i][j])) c += q[j] * (s[i][j] - '0');
			else {
				flag = 1;
				printf("%s\n", s[i]);
				break;
			}
		}
		if (j == 17 && e[c % 11] != s[i][17]) {
			flag = 1;
			printf("%s\n", s[i]);
		}
	}
	if (!flag) printf("All passed");

	return 0;
}
