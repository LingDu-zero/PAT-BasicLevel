#include <stdio.h>
#include <math.h>

int main(void)
{
	double r1, r2, p1, p2, A, B;
	scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
	A = r1*r2*cos(p1)*cos(p2) - r1*r2*sin(p1)*sin(p2);
	B = r1*r2*(cos(p1)*sin(p2) + cos(p2)*sin(p1));
	if (fabs(A) < 0.01) A = 0;
	if (fabs(B) < 0.01) B = 0;
	printf("%.2f", A);
	if (B < 0) printf("%.2fi\n", B);
	else printf("+%.2fi\n", B);

	return 0;
}
