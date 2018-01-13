#include <stdio.h>

bool test(int n);

int main(void)
{
	int n;
	scanf("%d", &n);
	int k = 0;
	int pre = 2;
	for (int i = 3; i < n; i+=2)
		if (test(i)) {
			if (i - pre == 2) k++;
			pre = i;
		}
	printf("%d\n", k);

	return 0;
}

bool test(int n) {
	int x = 3;
	while (x*x <= n) {
		if (n%x++ == 0) return false;
	}
	return true;
}
