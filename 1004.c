#include <stdio.h>
#include <string.h>

int main(void)
{
	int m, score;
	scanf("%d", &m);
	char namel[11], idl[11], nameh[11], idh[11], name[11], id[11];
	int high = 0;
	int low = 100;
	while (m--) {
		scanf("%s %s %d", name, id, &score);
		if (score >= high) {
			strcpy(nameh, name);
			strcpy(idh, id);
			high = score;
		}
		if (score <= low) {
			strcpy(namel, name);
			strcpy(idl, id);
			low = score;
		}
	}
	printf("%s %s\n", nameh, idh);
	printf("%s %s\n", namel, idl);

	return 0;
}
