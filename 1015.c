#include <stdio.h>

typedef struct {
	int ID;
	int virtue;
	int ability;
	int Tot;
}Student;

int sort(const void* a, const void* b) {
	Student* c = (Student *)a;
	Student* d = (Student *)b;
	if (c->Tot != d->Tot) return d->Tot - c->Tot;
	if (c->virtue != d->virtue) return d->virtue - c->virtue;
	return c->ID - d->ID;
}

int main(void)
{
	int n, l, h, n1, n2, n3, n4;
	n1 = n2 = n3 = n4 = 0;
	scanf("%d %d %d", &n, &l, &h);
	Student *L1, *L2, *L3, *L4, temp;
	L1 = (Student *)malloc(n*sizeof(Student));
	L2 = (Student *)malloc(n*sizeof(Student));
	L3 = (Student *)malloc(n*sizeof(Student));
	L4 = (Student *)malloc(n*sizeof(Student));
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &temp.ID, &temp.virtue, &temp.ability);
		temp.Tot = temp.ability + temp.virtue;
		if (temp.virtue >= h&&temp.ability >= h) L1[n1++] = temp;
		else if (temp.virtue >= h&&temp.ability >= l) L2[n2++] = temp;
		else if (temp.virtue >= l&&temp.ability >= l&&temp.virtue >= temp.ability) L3[n3++] = temp;
		else if (temp.virtue >= l&&temp.ability >= l) L4[n4++] = temp;
	}
	qsort(L1, n1, sizeof(Student), sort);
	qsort(L2, n2, sizeof(Student), sort);
	qsort(L3, n3, sizeof(Student), sort);
	qsort(L4, n4, sizeof(Student), sort);

	printf("%d\n", n1 + n2 + n3 + n4);
	for (int i = 0; i < n1; i++) printf("%d %d %d\n", L1[i].ID, L1[i].virtue, L1[i].ability);
	for (int i = 0; i < n2; i++) printf("%d %d %d\n", L2[i].ID, L2[i].virtue, L2[i].ability);
	for (int i = 0; i < n3; i++) printf("%d %d %d\n", L3[i].ID, L3[i].virtue, L3[i].ability);
	for (int i = 0; i < n4; i++) printf("%d %d %d\n", L4[i].ID, L4[i].virtue, L4[i].ability);

	return 0;
}
