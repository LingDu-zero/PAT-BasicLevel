#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char t[81], w[81], p[81];
	scanf("%s\n%s", t, w);
	int i = 0, j = 0, k = 0;
	while (t[i] != '\0') {
		if (t[i] != w[j]) {
			char ch = toupper(t[i]);
			int flag = 0;
			for (int x = 0; x < k; x++)
				if (p[x] == ch) {
					flag = 1;
					continue;
				}
			if (!flag) p[k++] = ch;
			i++;
		}
		else {
			i++;
			j++;
		}
	}
	for (int i = 0; i < k; i++) printf("%c", p[i]);

	return 0;
}
