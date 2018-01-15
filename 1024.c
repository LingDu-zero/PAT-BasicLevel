#include <stdio.h>

int main(void)
{
	int e, i = 0;
	char s[21], c;
	if ((c = getchar()) == '-') printf("-");
	while(1) {
		if ((c = getchar()) == 'E') break;
		else if (c == '.') continue;
		s[i++] = c;
	}
	s[i] = '\0';
	scanf("%d", &e);
	if (e < 0) {
		printf("0.");
		while (++e) printf("0");
		printf("%s", s);
	}
	else {
		int k = e + 1 - i;
		if (k == 0) printf("%s", s);
		else if (k > 0) {
			printf("%s", s);
			while (k--) printf("0");
		}
		else {
			for (int j = 0; j < i; j++) {
				printf("%c", s[j]);
				if (j == e) printf(".");
			}
		}
	
	}

	return 0;
}
