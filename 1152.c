#include <stdio.h>
#include <string.h>
#define num 1000

int main(void) {
  char str[num];
  char* tmp;
  gets(str);
  int cnt = 0;
  tmp = strtok(str, " ");
  while(tmp != NULL) {
    cnt += 1;
    tmp = strtok(NULL, " ");
  }
  
  printf("%d", cnt);
}
