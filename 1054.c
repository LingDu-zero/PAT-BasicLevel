#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int islegal(char *s, int n) {
	int flag = 0;
	for (int i = 0; i < n; i++) {
		if (!((!i&&s[i] == '-') || (s[i] >= '0'&&s[i] <= '9' || s[i] == '.'))) return 0;
		if (s[i] == '.') {
			if (n - i - 1 > 2) return 0;
			flag++;
		}
		if (flag > 1) return 0;
	}
	double x = atof(s);
	if (x < -1000 || x>1000) return 0;
	return 1;
}

int main(void)
{
	int n, c = 0;
	double arr[101];
	scanf("%d", &n);
	while (n--) {
		char s[100];
		scanf("%s", s);
		if (islegal(s, strlen(s))) arr[c++] = atof(s);
		else {
			printf("ERROR: %s is not a legal number\n", s);
		}
	}
	double sum = 0;
	for (int i = 0; i < c; i++)
		sum += arr[i];
	if (!c) printf("The average of 0 numbers is Undefined\n");
	else if(c==1) printf("The average of 1 number is %.2lf\n", sum);
	else printf("The average of %d numbers is %.2lf\n", c, sum / c);

	return 0;
}
