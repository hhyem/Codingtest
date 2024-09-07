#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  char s[100] = "";
  int n;
  long long result = 0;
  int tmp = 0;
  int j = 0;

  scanf("%lld %d", &result, &n);

  char ans[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  while(result>0) {
    tmp = result % n;
    result = result / n;
    for(int i=0; i<strlen(ans); i++) {
      if (tmp == i) {
        s[j] = ans[i];
        j+=1;
      }
    }
  }

  j = strlen(s);
  for(int i=j-1; i>=0; i--) {
    printf("%c", s[i]);
  }
  
}
