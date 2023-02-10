#include <stdio.h>

int main() {
  int num1, num2, num3;
  scanf("%d %d %d", &num1, &num2, &num3);
  int max_next;
  
  if(num1 > num2) {
    if(num1 > num3) {
      if(num2 > num3) 
        max_next = num2;
      else 
        max_next = num3;
    }
    else 
      max_next = num1;
  }
  else if(num1 < num2) {
    if(num2 > num3) {
      if(num1 > num3) 
        max_next = num1;
      else
        max_next = num3;
    }
    else 
      max_next = num2;
  }
  else 
    max_next = num1;
  printf("%d", max_next);
}
