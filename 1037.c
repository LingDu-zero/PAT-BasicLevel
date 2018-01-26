#include <stdio.h>

typedef struct money money;
struct money {
	long long g;
	int s;
	int k;
};

money sub(money P, money A) {
	money temp;
	int flag = 0;
	if (A.k < P.k) {
		flag = 1;
		temp.k = A.k + 29 - P.k;
	}
	else temp.k = A.k - P.k;
	if (flag) {
		flag = 0;
		if (A.s - 1 < P.s) {
			flag = 1;
			temp.s = A.s + 16 - P.s;
		}
		else temp.s = A.s - 1 - P.s;
	}
	else {
		if (A.s < P.s) {
			flag = 1;
			temp.s = A.s + 17 - P.s;
		}
		else temp.s = A.s - P.s;
	}
	if (flag) temp.g = A.g - P.g - 1;
	else temp.g = A.g - P.g;
	
	return temp;
}

int main(void)
{
	money P = { 0,0,0 }, A = { 0,0,0 };
	scanf("%lld.%d.%d %lld.%d.%d", &P.g, &P.s, &P.k, &A.g, &A.s, &A.k);
	money temp = sub(P, A);
	if (temp.g < 0) {
		temp = sub(A, P);
		printf("-%lld.%d.%d",temp.g,temp.s,temp.k);
	}
	else printf("%lld.%d.%d", temp.g, temp.s, temp.k);

	return 0;
}
