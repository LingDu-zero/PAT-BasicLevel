#include <stdio.h>

int main(void)
{
	int n, m;
	int score[100];
	scanf("%d %d", &n, &m);
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) scanf("%d", &score[i]);
		int max = 0, min = m, num = 0, sum = 0;
		for (int i = 1; i < n; i++) {
			if (score[i] >= 0 && score[i] <= m) {
				num++;
				sum += score[i];
				if (score[i] > max) max = score[i];
				if (score[i] < min) min = score[i];
			}
		}
		sum -= max;
		sum -= min;
		double g1 = sum*1.0 / (num - 2);
		printf("%.0f\n", round((g1 + score[0])*1.0 / 2));
	}

	return 0;
}
