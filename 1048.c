#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[101], b[101], c[101];
	char str[13] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' };
	scanf("%s %s", a, b);
	int m = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
	c[m] = '\0';
	for (int i = strlen(b) - 1, k = strlen(a) - 1, j = 1; i >= 0 || k >= 0; i--, k--) {
		if (i >= 0 && k >= 0) {
			if (j) {
				c[--m] = str[(a[k] - '0' + b[i] - '0') % 13];
				j = 0;
			}
			else {
				c[--m] = str[(b[i] - a[k]) < 0 ? (10 + b[i] - a[k]) : (b[i] - a[k])];
				j = 1;
			}
		}
		else if (i >= 0) c[--m] = b[i];
		else if (i < 0) {
			if (j) {
				c[--m] = a[k];
				j = 0;
			}
			else {
				c[--m] = str[('0' - a[k]) < 0 ? (10 + '0' - a[k]) : 0];
				j = 1;
			}
		}
	}
	printf("%s\n", c);

	return 0;
}
