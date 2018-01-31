#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	int score[100], ans[100];
	for (int i = 0; i < m; i++) scanf("%d", &score[i]);
	for (int i = 0; i < m; i++) scanf("%d", &ans[i]);
	for (int i = 0; i < n; i++) {
		int tot = 0, a;
		for (int j = 0; j < m; j++) {
			scanf("%d", &a);
			if (a == ans[j]) tot += score[j];
		}
		printf("%d\n", tot);
	}

	return 0;
}
