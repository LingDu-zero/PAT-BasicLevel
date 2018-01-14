#include <stdio.h>

int main(void)
{
	int n, x, A1, A2, A3, A4, A5, flag, k;
	A1 = A2 = A3 = A4 = A5 = flag = k = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		switch (x % 5) {
		case 0:if (x % 2 == 0) A1 += x; break;
		case 1: {
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
	if (A1) printf("%d", A1);
	else printf("N");
	if (A2) printf(" %d", A2);
	else printf(" N");
	if (A3) printf(" %d", A3);
	else printf(" N");
	if (A4) printf(" %.1f", float(A4) / float(k));
	else printf(" N");
	if (A5) printf(" %d", A5);
	else printf(" N");

	return 0;
}
