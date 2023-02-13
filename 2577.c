#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  int re = a*b*c;
  int num[10] = {0,};
  int temp = 0;

  for(int j = 0; re > 0; j++) {
    temp = re%10;
    num[temp] += 1;
    re /= 10;
  }

  for(int i=0; i<10; i++) 
    printf("%d\n", num[i]);
  
}
​
