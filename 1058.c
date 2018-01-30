#include <stdio.h>
#include <ctype.h>
#include <math.h>

typedef struct question question;
struct question {
	int score;
	int ans_num;
	int ans;
	int fault;
};

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int n;
	question list[101];
	for (int i = 1; i <= M; i++) {
		list[i].ans = 0;
		scanf("%d %d %d", &list[i].score, &n, &list[i].ans_num);
		char c;
		for (int j = 0; j < list[i].ans_num; ) {
			c = getchar();
			if (isalpha(c)) {
				list[i].ans += pow(10, (c - 'a'));
				j++;
			}
		}
		while ((c = getchar()) != '\n') continue;
		list[i].fault = 0;
	}
	int score = 0, flag = 0;
	for (int i = 0; i < N; i++) {
		score = 0;
		for (int j = 1; j <= M; j++) {
			char c;
			flag = 0;
			while ((c = getchar()) != ')') {
				if (isalpha(c)) flag += pow(10, c - 'a');
			}
			if (flag == list[j].ans) score += list[j].score;
			else list[j].fault++;
		}
		printf("%d\n", score);
	}
	int max_fault = 0;
	for (int i = 1; i <= M; i++)
		if (list[i].fault>max_fault) max_fault = list[i].fault;
	if (!max_fault) printf("Too simple\n");
	else {
		printf("%d", max_fault);
		for (int i = 1; i <= M; i++) {
			if (list[i].fault == max_fault) printf(" %d", i);
		}
	}
	return 0;
}
