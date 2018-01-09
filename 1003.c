/**************************************
鉴于本题指向不明确，笔者仅以自身理解判断
1、xPATx表明左右相同
2、必须出现PAT
3、P左边A的数目*PT之间A的数目=T右边A的数目
***************************************/
#include <stdio.h>
#include <string.h>

int check();

int main(void)
{
	int m;
	scanf("%d", &m);
	while (m--) check();

	return 0;
}

int check() {
	char s[100];
	scanf("%s", s);
	int len = strlen(s);
	int Pw, Tw;
	int Pcount = 0;
	int Acount = 0;
	int Tcount = 0;
	for (int i = 0; i < len; i++) {
		switch (s[i]) {
		case 'A':Acount++; break;
		case 'P':Pcount++; Pw = i; break;
		case 'T':Tcount++; Tw = i; break;
		default:printf("No\n"); return 0;
		}

	}
	if (Pcount != 1 || Tcount != 1 || !Acount||Pw * (Tw - Pw - 1) != (len - Tw - 1)) {
		printf("No\n");
	}
	else printf("Yes\n");

	return 0;
}
