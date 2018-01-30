#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	long sum = 0;
	while ((c = getchar()) != '\n') {
		if (isalpha(c)) sum += tolower(c) - 'a' + 1;
	}
	long num_one = 0, num_zero = 0;
	while (sum) {
		if (sum % 2) num_one++;
		else num_zero++;
		sum /= 2;
	}
	printf("%d %d\n", num_zero, num_one);

	return 0;
}
