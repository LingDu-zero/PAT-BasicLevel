#include <stdio.h>

int max_radix(int* s,int* c,int N) {
	int radix;
	float max = 0;
	for (int i = 0; i < N; i++) {
		float temp = float(s[i]) / float(c[i]);
		if (temp > max) {
			max = temp;
			radix = i;
		}
	}
	return radix;
}

int main(void)
{
	int N, D, radix;
	float S = 0;
	int *c, *s;
	scanf("%d %d", &N, &D);
	c = (int *)malloc(N*sizeof(int));
	s = (int *)malloc(N*sizeof(int));
	for (int i = 0; i < N; i++) scanf("%d", &c[i]);
	for (int i = 0; i < N; i++) scanf("%d", &s[i]);
	while (D) {
		radix = max_radix(s, c, N);
		if (D >= c[radix]) {
			S += s[radix];
			s[radix] = 0;
			D -= c[radix];
		}
		else {
			S += float(s[radix]) / float(c[radix])*D;
			D = 0;
		}
	}
	printf("%.2f", S);

	return 0;
}
