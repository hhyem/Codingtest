#include <stdio.h>
#include <string.h>

int main(void) {
  int n, cnt = 0, tmp;
  scanf("%d", &n);
  char str[100][20];

  for(int i=0; i<n; i++) {
    scanf("%s", &str[i][19]);
    if(strcmp(&str[i][19], "ENTER") == 0) {
      str[99][19] = '\0';
      tmp = i;
      continue;
    } 
    else {
      cnt+=1;
      for(int j=tmp+1; j<i; j++) { //enter 이후에 입장한 적이 있는지 확인 (이름 같은 사람 있는지)
        if(strcmp(&str[i][19], &str[j][19]) == 0) {
          cnt-=1;
          break;
        }
      }
    }
  }

  printf("%d\n", cnt);
}
