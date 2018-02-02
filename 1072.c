#include <stdio.h>

int main(void)
{
	int m, n;
	int s = 0, k = 0, x;
	int arr[10000] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &x);
		arr[x] = 1;
	}
	while (n--) {
		char name[5];
		int num, flag = 0;
		scanf("%s %d", name, &num);
		while (num--) {
			scanf("%d", &x);
			if (arr[x]) {
				if (flag) printf(" %04d", x);
				else {
					printf("%s: %04d", name, x);
					flag = 1;
					s++;
				}
				k++;
			}
		}
		if(flag) printf("\n");
	}
	printf("%d %d\n", s, k);

	return 0;
}
