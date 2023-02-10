#include <stdio.h>

int main() {
  int num = 0;
  scanf("%d", &num);
  int num2 = 0;
  char str[100];
  char new_str[100] = {0, };
  
  for(int i = 0; i < num; i++) {
    scanf("%d %s", &num2, &str);
    for(int j = 0; j < strlen(str); j++) {
      new_str[j] = str[j]; 
      printf("%c", new_str[j]);
    }
  }
  
  printf("\n");
}
