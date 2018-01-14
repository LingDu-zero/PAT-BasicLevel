#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[61], s2[61], s3[61], s4[61];
	scanf("%s\n%s\n%s\n%s", s1, s2, s3, s4);
	int c = 0;
	for (int i = 0; i < strlen(s1) && i < strlen(s2); i++) {
		if (s1[i] == s2[i] && s1[i] >= 'A'&&s1[i] <= 'G'&&c == 0) {
			switch (s1[i]) {
			case 'A':printf("MON "); break;
			case 'B':printf("TUE "); break;
			case 'C':printf("WED "); break;
			case 'D':printf("THU "); break;
			case 'E':printf("FRI "); break;
			case 'F':printf("SAT "); break;
			case 'G':printf("SUN "); break;
			}
			c++;
		}
		else if (s1[i] == s2[i] && c == 1) {
			if (s1[i] >= 'A'&&s1[i] <= 'N') {
				printf("%d:", s1[i] - 'A' + 10);
				break;
			}
			else if (s1[i] >= '0'&&s1[i] <= '9') {
				printf("0%d:", s1[i] - '0');
				break;
			}
		}
	}
	for (int i = 0; i < strlen(s3) && i < strlen(s4); i++) {
		if (s3[i] == s4[i] && ((s3[i] >= 'a'&&s3[i] <= 'z') || (s3[i] >= 'A'&&s3[i] <= 'Z'))) {
			if (i < 10) printf("0");
			printf("%d", i);
		}
	}

	return 0;
}
