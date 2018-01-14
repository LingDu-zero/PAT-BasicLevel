#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char A[101], B[101], Da,Db;
	scanf("%s %c %s %c", A, &Da, B, &Db);
	int n = 0, m = 0, Pa = 0, Pb = 0;
	for (int i = 0; i < strlen(A); i++)
		if (A[i] == Da) n++;
	for (int i = 0; i < strlen(B); i++)
		if (B[i] == Db) m++;
	while (n) Pa += (Da - '0')*pow(10, --n);
	while (m) Pb += (Db - '0')*pow(10, --m);
	printf("%d", Pa + Pb);

	return 0;
}
