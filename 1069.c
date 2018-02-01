#include <stdio.h>
#include <string.h>

int main(void)
{
	int m, n, s;
	char str[1000][21];
	scanf("%d %d %d", &m, &n, &s);
	if (m < s) {
		printf("Keep going...\n");
		return 0;
	}
	for (int i = 0, k = 0, t = 0, flag = 0; i < m; i++) {
		flag = 0;
		char c[21];
		scanf("%s", c);
		if (s>1) {
			s--;
			continue;
		}
		if (s == 1) {
			if (k == 0) {
				for (int j = 0; j < t; j++) {
					if (strcmp(str[j], c) == 0) {
						flag = 1;
						break;
					}
				}
				if (flag) k--;
				else {
					printf("%s\n", c);
					strcpy(str[t++], c);
				}
			}
			k++;
			if (k == n) k = 0;
		}
	}

	return 0;
}
