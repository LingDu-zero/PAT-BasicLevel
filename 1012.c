#include <stdio.h>

int main(void)
{
	int n, x, A1, A2, A3, A5, flag, c, v;
	float A4, k;
	A1 = A2 = A3 = A4 = A5 = flag = k = c = v = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		switch (x % 5) {
		case 0:{
			if (x % 2 == 0) {
			A1 += x;
			c = 1;
			}
			break;
		}
		case 1: {
			v = 1;
			if (flag) {
				A2 -= x;
				flag = 0;
			}
			else {
				A2 += x;
				flag = 1;
			}
			break;
		}
		case 2:A3++; break;
		case 3:A4 += x; k++; break;
		case 4:if (x > A5) A5 = x; break;
		}
	}
	if (c) printf("%d", A1);
	else printf("N");
	if (v) printf(" %d", A2);
	else printf(" N");
	if (A3) printf(" %d", A3);
	else printf(" N");
	if (A4) printf(" %.01f", A4 / k);
	else printf(" N");
	if (A5) printf(" %d", A5);
	else printf(" N");

	return 0;
}
