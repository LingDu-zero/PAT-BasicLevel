#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int c1, c2;
	scanf("%d%d", &c1, &c2);
	int t = round(float(c2 - c1) / float(100));
	printf("%d:%d:%d", t / 3600, (t % 3600) / 60, (t % 3600) % 60);
  
	return 0;
}
