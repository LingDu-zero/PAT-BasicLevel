#include <stdio.h>

int test(int n) {
	int x = 2;
	while (x*x <= n) {
		if (n%x++ == 0) return 0;
	}
	return 1;
}

int main(void)
{
	int arr[10000] = { 0 }, check[10000] = { 0 }, n, id;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &id);
		arr[id] = i + 1;
		check[id] = 1;
	}
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &id);
		if (arr[id] == 0) printf("%04d: Are you kidding?\n", id);
		else if (check[id] == 0) printf("%04d: Checked\n", id);
		else if (arr[id] == 1) {
			printf("%04d: Mystery Award\n", id);
			check[id]--;
		}
		else if (test(arr[id])) {
			printf("%04d: Minion\n", id);
			check[id]--;
		}
		else {
			printf("%04d: Chocolate\n", id);
			check[id]--;
		}
	}

	return 0;
}
