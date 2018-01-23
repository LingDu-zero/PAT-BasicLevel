#include <stdio.h>

int max_radix(float* s,float* c,int N) {
	int radix;
	float max = 0;
	for (int i = 0; i < N; i++) {
		float temp = s[i] / c[i];
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
	float *c, *s;
	scanf("%d %d", &N, &D);
	c = (float *)malloc(N*sizeof(float));
	s = (float *)malloc(N*sizeof(float));
	for (int i = 0; i < N; i++) scanf("%f", &c[i]);
	for (int i = 0; i < N; i++) scanf("%f", &s[i]);
	while (D) {
		radix = max_radix(s, c, N);
		if (D >= c[radix]) {
			S += s[radix];
			s[radix] = 0;
			D -= c[radix];
		}
		else {
			S += s[radix] / c[radix]*D;
			D = 0;
		}
	}
	printf("%.02f", S);

	return 0;
}
