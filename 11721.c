#include <stdio.h>

int main() {
  char str[100];
  scanf("%s", &str);
  int str_len;
  str_len = strlen(str);
  
  for(int i=0; i<str_len; i++) {
    int j=i+1;
    if(j%10 == 0) 
      printf("%c\n", str[i]);
    else
      printf("%c\n", str[i]);
  }
}
