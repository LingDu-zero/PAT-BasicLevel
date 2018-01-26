#include <stdio.h>

typedef struct fraction fraction;

struct fraction {
	long n;
	long c;
	long d;
};

long gcd(long a, long b) {
	return b == 0 ? a : gcd(b, a%b);
}

fraction simple(fraction a) {
	if (a.n < 0) {
		a.n *= -1;
		a.c *= -1;
	}
	long g = gcd(a.n, a.d);
	a.n /= g;
	a.d /= g;
	return a;
}

void printfc(fraction a) {
	if (a.d == 0) printf("Inf");
	else if (a.n == 0) printf("0");
	else {
		long x = a.n / a.d;
		a.n %= a.d;
		a = simple(a);
		if (a.c == -1) printf("(-");
		if (x != 0) printf("%ld", x);
		if (x != 0 && a.n != 0) printf(" ");
		if (a.n != 0) printf("%ld/%ld", a.n, a.d);
		if (a.c == -1) printf(")");
	}
}

fraction plus(fraction a, fraction b) {
	fraction temp = { a.c*a.n*b.d + b.c*b.n*a.d, 1, a.d*b.d };
	return temp;
}

fraction sub(fraction a, fraction b) {
	fraction temp = { a.c*a.n*b.d - b.c*b.n*a.d, 1, a.d*b.d };
	return temp;
}

fraction multi(fraction a, fraction b) {
	fraction temp = { a.n*b.n, a.c*b.c, a.d*b.d };
	return temp;
}

fraction divis(fraction a, fraction b) {
	fraction temp = { a.n*b.d, a.c*b.c, a.d*b.n };
	return temp;
}

int main(void)
{
	fraction a = { 0,1,0 }, b = { 0,1,0 };
	scanf("%ld/%ld %ld/%ld", &a.n, &a.d, &b.n, &b.d);
	printfc(simple(a));
	printf(" + ");
	printfc(simple(b));
	printf(" = ");
	printfc(simple(plus(a, b)));
	printf("\n");
	printfc(simple(a));
	printf(" - ");
	printfc(simple(b));
	printf(" = ");
	printfc(simple(sub(a, b)));
	printf("\n");
	printfc(simple(a));
	printf(" * ");
	printfc(simple(b));
	printf(" = ");
	printfc(simple(multi(a, b)));
	printf("\n");
	printfc(simple(a));
	printf(" / ");
	printfc(simple(b));
	printf(" = ");
	printfc(simple(divis(simple(a), simple(b))));
	printf("\n");

	return 0;
}
