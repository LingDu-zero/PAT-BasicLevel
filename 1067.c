#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char password[21], test[101];
	scanf("%s %d", password, &n);
	getchar();
	while (n--) {
		gets(test);
		if (strcmp(test, "#") == 0) return 0;
		if (strcmp(password, test) == 0) {
			printf("Welcome in\n");
			break;
		}
		printf("Wrong password: %s\n", test);
	}
	if (n == -1) printf("Account locked\n");

	return 0;
}
