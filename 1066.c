#include <stdio.h>

int main(void)
{
	int m, n, A, B, c;
	scanf("%d %d %d %d %d", &m, &n, &A, &B, &c);
	int img[500][500];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int k;
			scanf("%d", &k);
			if (k >= A&&k <= B) k = c;
			img[i][j] = k;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j) printf(" %03d", img[i][j]);
			else printf("%03d", img[i][j]);
		}
		printf("\n");
	}

	return 0;
}
