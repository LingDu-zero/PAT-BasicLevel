#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		long long a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		printf("Case #%d: %s\n", i + 1, (a + b)>c ? "true" : "false");
	}

	return 0;
}
