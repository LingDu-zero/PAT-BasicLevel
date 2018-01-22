#include <stdio.h>

int main(void)
{
	int n;
	int x[100000] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n;i++) {
		int c, y;
		scanf("%d %d", &c, &y);
		x[c-1] += y;
	}
	int max=0, index;
	for (int i = 0; i < n; i++) {
		if (x[i] > max) {
			index = i;
			max = x[i];
		}
	}
	printf("%d %d", index + 1, x[index]);

	return 0;
}
