#include <stdio.h>

int solution(int m);

int main(void)
{
	char a;
	unsigned long m = 0;
	while ((a = getchar())!='\n') {
		 m += a - '0';
	}
	solution(m);

	return 0;
}

int solution(int m) {
	if (!m) return 0;
	solution(m / 10);
	if (m / 10) printf(" ");
	switch (m % 10) {
	case 0:printf("ling"); break;
	case 1:printf("yi"); break;
	case 2:printf("er"); break;
	case 3:printf("san"); break;
	case 4:printf("si"); break;
	case 5:printf("wu"); break;
	case 6:printf("liu"); break;
	case 7:printf("qi"); break;
	case 8:printf("ba"); break;
	case 9:printf("jiu"); break;
	}
	return 0;
}
