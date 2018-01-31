#include <stdio.h>

int cmp(const void* a, const void* b) {
	return *(int *)a - *(int *)b;
}

int main(void)
{
	int n, arr[100000] = { -1 }, id1, id2, *a;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &id1, &id2);
		arr[id1] = id2;
		arr[id2] = id1;
	}
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int)*n);
	int k = n;
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), cmp);
	for (int i = 0; i < n; i++) {
		if (a[i] == -1) continue;
		if (arr[a[i]] == -1) continue;
		for (int j = i; j < n;j++)
			if (a[j] == arr[a[i]]) {
				a[i] = a[j] = -1;
				k -= 2;
				break;
			}
	}
	printf("%d\n", k);
	int flag = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != -1 && flag) printf(" %05d", a[i]);
		else if (a[i] != -1) {
			printf("%05d", a[i]);
			flag = 1;
		}
	}

	return 0;
}
