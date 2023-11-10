#include <stdio.h>
#include <string.h>

int main(void) {

  char str[100];
  scanf("%s", str);
  int cnt = 0;


  for(int i=0; i<strlen(str); i++) {
    cnt++;
    if(str[i] == '=') {
      if(str[i-1] == 'c' || str[i-1] == 's') 
        cnt--;     
      if (str[i - 1] == 'z') {
        cnt--;
        if (str[i - 2] == 'd') 
          cnt--;
      }
    }
    if(str[i] == '-') 
      if(str[i-1] == 'c' || str[i-1] == 'd') 
        cnt--;
    if(str[i] == 'j') {
      if(str[i-1] == 'l' || str[i-1] == 'n')
        cnt--;
    }
  }

  printf("%d\n", cnt);
}
