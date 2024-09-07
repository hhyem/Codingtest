#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  char s[50];
  int n;
  long long result = 0;
  int tmp = 0;

  scanf("%s %d", s, &n);

  char ans[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  for(int i=strlen(s)-1; i>=0; i--) {
    for(int j=0; j<strlen(ans); j++) {
      if(s[i] == ans[j]) {
        result += (j) * pow(n, tmp);
        // printf("%d %d %d %d\n", j, n, tmp, result);
      }
    }
    tmp+=1;
  }

  printf("%lld\n", result);
  
}
