#include <stdio.h>

typedef struct s s;

struct s {
	char id[15];
	int seat;
};

int main(void)
{
	int n;
	s *list;
	scanf("%d", &n);
	list = (s*)malloc(n*sizeof(s));
	while (n--) {
		s temp;
		int i;
		scanf("%s %d %d", &temp.id, &i, &temp.seat);
		list[i - 1] = temp;
	}
	scanf("%d", &n);
	while (n--) {
		int i;
		scanf("%d", &i);
		printf("%s %d\n", list[i - 1].id, list[i - 1].seat);
	}
	
	return 0;
}
