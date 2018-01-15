#include <stdio.h>
#include <string.h>

int cmp1(const void *a, const void *b) {
	return *(char *)a - *(char *)b;
}

int cmp2(const void *a, const void *b) {
	return *(char *)b - *(char *)a;
}

int main(void)
{
	char s1[5], s2[5];
	scanf("%s", s1);
	while (!(strcmp(s1,"6174")==0 || strcmp(s1,"0000")==0)) {
		int m, flag = 0;
		strcpy(s2, s1);
		qsort(s1, 4, sizeof(char), cmp1);
		qsort(s2, 4, sizeof(char), cmp2);
		printf("%s - %s = ", s2, s1);
		for (int i = 3; i >= 0; i--) {
			m = s2[i] - s1[i];
			if (!flag) {
				if (m >= 0) s1[i] = m + '0';
				else {
					s1[i] = 10 + m + '0';
					flag = 1;
				}
			}
			else {
				m -= 1;
				flag = 0;
				if (m >= 0) s1[i] = m + '0';
				else {
					s1[i] = 10 + m + '0';
					flag = 1;
				}
			}
		}
		printf("%s\n", s1);
		
	}

	return 0;
}
