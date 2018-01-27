#include <stdio.h>

typedef struct s s;
struct s {
	int say;
	int hand;
	int drink;
};

int main(void)
{
	s a = { 0,0,0 }, b = { 0,0,0 };
	int n;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d %d", &a.say, &a.hand, &b.say, &b.hand);
		if (a.hand == (a.say + b.say) && b.hand != a.hand) b.drink++;
		else if (b.hand == (a.say + b.say) && b.hand != a.hand) a.drink++;
	}
	printf("%d %d\n", a.drink, b.drink);

	return 0;
}
