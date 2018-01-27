#include <stdio.h>

int main(void)
{
	int n, c, s, x;
	int a[1001] = { 0 };
	scanf("%d", &n);
	while (n--) {
		scanf("%d-%d %d", &c, &x, &s);
		a[c] += s;
	}
	c = 0;
	for (int i = 1; i < 1001; i++)
		if (a[i]>a[c]) c = i;
	printf("%d %d\n", c, a[c]);

	return 0;
}
