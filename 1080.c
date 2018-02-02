#include <stdio.h>
#include <string.h>

typedef struct stu stu;
struct stu {
	int oj;
	int middle;
	int all;
	int fin;
	char name[21];
};

int cmp(const void* a, const void* b) {
	stu *x = (stu *)a;
	stu *y = (stu *)b;
	if (x->all == y->all) return strcmp(x->name, y->name);
	else return y->all - x->all;
}

int main(void)
{
	int p, m, n;
	scanf("%d %d %d", &p, &m, &n);
	stu list[10000];
	char s[21];
	int score, k = 0;
	while (p--) {
		scanf("%s %d", s, &score);
		if (score < 200) continue;
		list[k].oj = score;
		list[k].middle = list[k].fin = -1;
		strcpy(list[k].name, s);
		k++;
	}
	while (m--) {
		scanf("%s %d", s, &score);
		for (int i = 0; i < k; i++) {
			if (strcmp(s, list[i].name) == 0) {
				list[i].middle = score;
				break;
			}
		}
	}
	while (n--) {
		scanf("%s %d", s, &score);
		for (int i = 0; i < k; i++) {
			if (strcmp(s, list[i].name) == 0) {
				list[i].fin = score;
				break;
			}
		}
	}
	for (int i = 0; i < k; i++) {
		if (list[i].middle == -1 && list[i].fin == -1) list[i].all = 0;
		else if (list[i].fin > list[i].middle) list[i].all = list[i].fin;
		else if (list[i].fin == -1) list[i].all = round(0.4 * list[i].middle);
		else list[i].all = round(0.4*list[i].middle + 0.6*list[i].fin);
	}
	qsort(list, k, sizeof(stu), cmp);
	for (int i = 0; i < k; i++) {
		if (list[i].fin >= 60) {
			printf("%s %d %d %d %d\n", list[i].name, list[i].oj, list[i].middle, list[i].fin, list[i].all);
		}
		else break;
	}

	return 0;
}
