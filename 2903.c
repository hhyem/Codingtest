#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n;
  scanf("%d", &n);

  int line = 2; //선 긋는 횟수
  int sum = 0;

  for(int i=1; i<=n; i++) {
    sum = line + 1;
    sum*=sum;
    line = line * 2;
  }

  printf("%d\n", sum);
  
  return 0;
}
