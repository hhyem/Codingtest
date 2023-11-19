#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char str[5][15] = {0};
  char tmp;
  int j = 0;

  for(int i=0; i<5; i++) {
    scanf("%s", str[i], sizeof(str));
  }

  for(int i=0; i<15; i++) {
    for(int j=0; j<5; j++) {
      if(str[j][i] != '\n' && str[j][i] != 0)
        printf("%c", str[j][i]);
    }
  }
  return 0;
}
