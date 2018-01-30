#include <stdio.h>
#include <string.h>

typedef struct s s;
struct s {
	char name[9];
	int height;
};

int cmp(const void* a, const void* b) {
	s x = *(s *)a;
	s y = *(s *)b;
	if (x.height != y.height) return y.height - x.height;
	else return strcmp(x.name, y.name);
}

void print(s *d, int n) {
	s *arr, *p = d;
	arr = (s *)malloc(n*sizeof(s));
	int middle = n / 2, i, j;
	i = j = middle;
	arr[middle] = (*p++);
	while (i > 0 || j < n) {
		if (--i >= 0) arr[i] = (*p++);
		if (++j < n) arr[j] = (*p++);
	}
	for (int i = 0; i < n; i++) {
		if (i) printf(" %s", arr[i].name);
		else printf("%s", arr[i].name);
	}
	free(arr);
}

int main(void)
{
	int N, K;
	s list[10001];
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) scanf("%s %d", list[i].name, &list[i].height);
	qsort(list, N, sizeof(s), cmp);
	for (int i = 0; i < K; i++) {
		if (!i) print(list, N / K + N%K);
		else print(list + N%K + i*(N / K), N / K);
		printf("\n");
	}

	return 0;
}
