#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, arr[37] = { 0 }, c;
	scanf("%d", &n);
	while (n--) {
		c = 0;
		char s[5];
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++) c += s[i] - '0';
		arr[c]++;
	}
	int tot = 0;
	for (int i = 0; i < 37; i++)
		if (arr[i]) tot++;
	printf("%d\n", tot);
	int flag = 0;
	for (int i = 0; i < 37; i++) {
		if (arr[i] && flag) printf(" %d", i);
		else if (arr[i]) {
			printf("%d", i);
			flag = 1;
		}
	}

	return 0;
}
