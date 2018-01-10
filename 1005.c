#include <stdio.h>

void solution(int x, int* arr,int n);
void sort(int* arr, int n);

int main(void)
{
	int n;
	scanf("%d", &n);
	int *arr;
	arr = (int *)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++)
		if (arr[i] != 0) solution(arr[i], arr, n);
	sort(arr, n);
	printf("%d", arr[0]);
	for (int i = 1; i < n; i++) {
		if (arr[i] == 0) break;
		printf(" %d", arr[i]);
	}

	return 0;
}

void solution(int x, int* arr,int n) {
	while (x - 1) {
		if (x % 2 == 0) x /= 2;
		else x = (3 * x + 1) / 2;
		for (int i = 0; i < n; i++) 
			if (arr[i] == x) arr[i] = 0;
	}
}

void sort(int* arr, int n) {
	int k;
	for (int i = 0; i < n; i++) {
		int max = 0;
		for (int j = i; j < n; j++) {
			if (arr[j] > max) {
				max = arr[j];
				k = j;
			}
		}
		arr[k] = arr[i];
		arr[i] = max;
	}
}
