#include <stdio.h>

int main(void)
{
	char c;
	int a[6] = { 0 };
	while ((c = getchar()) != '\n') {
		switch (c) {
		case 'P':a[0]++; break;
		case 'A':a[1]++; break;
		case 'T':a[2]++; break;
		case 'e':a[3]++; break;
		case 's':a[4]++; break;
		case 't':a[5]++; break;
		default:break;
		}
	}
	int flag = 1;
	char z[6] = { 'P','A','T','e','s','t' };
	while (flag) {
		flag = 0;
		for (int x = 0; x < 6; x++) {
			if (a[x]) {
				printf("%c", z[x]);
				a[x]--;
				flag = 1;
			}
		}
	}

	return 0;
}
