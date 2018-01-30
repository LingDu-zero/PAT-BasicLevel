#include <stdio.h>

int get(char str[][5]) {
	int k = 0, flag = 0, i = 1, j = 0;
	char c;
	while ((c = getchar()) != '\n') {
		if (c == '[') {
			j = 0;
			flag = 1;
		}
		else if (c == ']') {
			flag = 0;
			str[i][j] = '\0';
			i++;
			k++;
		}
		else if (flag) {
			str[i][j] = c;
			j++;
		}
	}
	return k;
}

int main(void)
{
	char hand[11][5];
	char eye[11][5];
	char mouth[11][5];
	int c_hand, c_eye, c_mouth;
	c_hand = get(hand);
	c_eye = get(eye);
	c_mouth = get(mouth);
	int k;
	scanf("%d", &k);
	int l_hand, r_hand, l_eye, r_eye, n_mouth;
	while (k--) {
		scanf("%d %d %d %d %d", &l_hand, &l_eye, &n_mouth, &r_eye, &r_hand);
		if (l_hand > c_hand || r_hand > c_hand || l_eye > c_eye || r_eye > c_eye || n_mouth > c_mouth)
			printf("Are you kidding me? @\\/@\n");
		else if (l_hand < 1 || r_hand < 1 || l_eye < 1 || r_eye < 1 || n_mouth < 1)
			printf("Are you kidding me? @\\/@\n");
		else printf("%s(%s%s%s)%s\n", hand[l_hand], eye[l_eye], mouth[n_mouth], eye[r_eye], hand[r_hand]);
	}

	return 0;
}
