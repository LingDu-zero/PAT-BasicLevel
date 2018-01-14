#include <stdio.h>

int main(void)
{
	int flag = 0;
	int n, m;
	while(1)
	{
		scanf("%d %d", &n, &m);
		if(m)
		{
			if(flag) printf(" "); 
			else flag = 1;
			printf("%d %d", n * m, m - 1);
		}
		if(getchar() != ' ') break;
	}
	if(!flag) printf("0 0");

	return 0;
}
