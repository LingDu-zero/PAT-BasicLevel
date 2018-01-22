/***************************
没有用c++的oop去考虑
利用了strcmp的返回值技巧
***************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, k = 0;
	scanf("%d", &n);
	char s[6],c[11];
	char smin[6], smax[6], cmin[11]="1814/09/05", cmax[11]="2014/09/07";
	while (n--) {
		scanf("%s %s", s, c);
		if (strcmp(c, "2014/09/07") == -1 && strcmp(c, "1814/09/05") == 1) {
			k++;
			if (strcmp(c, cmin) == 1) {
				strcpy(smin, s);
				strcpy(cmin, c);
			}
			if (strcmp(c, cmax) == -1) {
				strcpy(smax, s);
				strcpy(cmax, c);
			}
		}
	}
  
	if (!k) printf("0");
	else if (k == 1) {
		printf("1 %s", strcmp(cmin, "00000") == 0 ? cmax : cmin);
	}
	else printf("%d %s %s", k, smax, smin);

	return 0;
}
