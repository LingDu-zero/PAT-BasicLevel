#include <stdio.h>

int gcd(int m, int n) {
	return n == 0 ? m : gcd(n, m%n);
}

int main(void)
{
	int n1, m1, n2, m2, k, flag = 0;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	if (n1*m2 > n2*m1) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
		temp = m1;
		m1 = m2;
		m2 = temp;
	}
	for (int i = 1; i < k; i++) {
		if (i*m1 <= n1*k) continue;
		if (i*m2 >= n2*k) break;
		if (gcd(i,k)==1) {
			if (flag) printf(" %d/%d", i, k);
			else {
				printf("%d/%d", i, k);
				flag = 1;
			}
		}
	}

	return 0;
}
