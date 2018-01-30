#include <stdio.h>

int main(void)
{
	double N, D, e;
	double empty = 0, mayempty = 0;
	scanf("%lf %lf %lf", &N, &e, &D);
	for (int j = 0; j < N;j++) {
		int unreachlevel = 0, d;
		double x;
		scanf("%d", &d);
		for (int i = 0; i < d; i++) {
			scanf("%lf", &x);
			if (x < e) unreachlevel++;
		}
		if (d > D&&unreachlevel > d / 2) empty++;
		else if (unreachlevel > d / 2) mayempty++;
	}
	printf("%.1f%% %.1f%%\n", mayempty / N * 100, empty / N * 100);

	return 0;
}
