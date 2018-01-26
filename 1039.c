#include <stdio.h>

int main(void)
{
	int a[128] = { 0 }, k = 0, q = 0;
	char c;
	while ((c = getchar()) != '\n') {
		a[c]++;
		k++;
	}
	while ((c = getchar()) != '\n') {
		if (a[c]) {
			a[c]--;
			k--;
		}
		else q++;
	}
	if (q) printf("No %d", q);
	else printf("Yes %d", k);

	return 0;
}
