#include <stdio.h>
int main(void) {
  char str[100];
  scanf("%s", &str);
  int cnt = 0;
  char str1[100];
  
  for(int i=0; i<=50; i++) {
    str1[i] = str[i];
    cnt += 1;
    if(strcmp(str, str1) == 0) {
      printf("%d", cnt-1);
      break;
    }
  }
}
