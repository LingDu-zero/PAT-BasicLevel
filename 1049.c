#include <stdio.h>

int main(void)
{
	long n;
	scanf("%ld", &n);
	double arr[100001];
	for (int i = 0; i < n; i++) scanf("%lf", &arr[i]);
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (n - i)*(i + 1)*arr[i];
	}
	printf("%.2f\n", sum);

	return 0;
}
