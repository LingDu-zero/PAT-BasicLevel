#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[100001];
  gets(s);
  long long numP = 0, numPA = 0, numPAT = 0;
  for (long long i = 0; i < strlen(s); i++) {
    if (s[i] == 'P') numP++;
    else if (s[i] == 'A') numPA += numP;
    else numPAT = (numPA + numPAT)%1000000007;
  }
  printf("%lld", numPAT);

  return 0;
}
