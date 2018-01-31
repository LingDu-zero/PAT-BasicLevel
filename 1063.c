#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	double a, b, max = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%lf %lf", &a, &b);
		if (a*a + b*b > max) max = a*a + b*b;
	}
	printf("%.2lf", sqrt(max));

	return 0;
}
