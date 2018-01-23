#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	float c1, c2;
	scanf("%f%f", &c1, &c2);
	int t = round((c2 - c1) / 100);
  	int h=t/3600;
  	if(h<10) printf("0%d:",h);
  	else printf("%d:",h);
  	int m=(t%3600)/60;
  	if(m<10) printf("0%d:",m);
  	else printf("%d:",m);
  	int s=(t % 3600) % 60;
  	if(s<10) printf("0%d",s);
  	else printf("%d",s);
  
	return 0;
}
