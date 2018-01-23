#include <stdio.h>
#define MAX(x) (x.b > x.j ? x.b : x.j) > x.c ? (x.b > x.j ? x.b : x.j) : x.c

typedef struct S S;

struct S {
	int w = 0, l = 0, e = 0;
	int c = 0, j = 0, b = 0;
};

int main(void)
{
	S a, b;
	int n;
	scanf("%d", &n);
	while(getchar()!='\n') continue;
	while (n--) {
		char x, y;
		scanf("%c %c", &x, &y);
		while (getchar() != '\n') continue;
		if (x == y) {
			a.e++;
			b.e++;
		}
		else if ((x == 'C'&&y == 'J') || (x == 'J'&&y == 'B') || (x == 'B'&&y == 'C')) {
			a.w++;
			b.l++;
			switch (x) {
			case'C':a.c++; break;
			case'J':a.j++; break;
			case'B':a.b++; break;
			}
		}
		else {
			b.w++;
			a.l++;
			switch (y) {
			case'C':b.c++; break;
			case'J':b.j++; break;
			case'B':b.b++; break;
			}
		}
	}

	printf("%d %d %d\n", a.w, a.e, a.l);
	printf("%d %d %d\n", b.w, b.e, b.l);
	int max = MAX(a);
	if (max = a.b) printf("B");
	else if (max = a.c) printf("C");
	else printf("J");
	printf(" ");
	max = MAX(b);
	if (max = b.b) printf("B");
	else if (max = b.c) printf("C");
	else printf("J");

	return 0;
}
