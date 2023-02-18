#include <stdio.h>

int main() {
  int a,b;
  for(int i=0; i<100; i++) {
    scanf("%d %d", &a, &b);
    if(a == 0 || b == 0) 
      break;
    else if(b%a == 0)
      printf("factor\n");
    else if(a%b == 0)
      printf("multiple\n");
    else
      printf("neither\n");
  }
}
