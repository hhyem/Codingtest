#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  int num1, num2, tmp1 = 0, tmp2 = 0;
  int max_x = -100000, min_x = 100000, max_y = -100000, min_y = 100000;

  for(int i=0; i<n; i++) {
    scanf("%d %d", &num1, &num2);
    if(num1 > max_x) {
      max_x = num1;
    } 
    if (num1 < min_x) {
      min_x = num1;
    }

    if(num2 > max_y) {
      max_y = num2;
    } 
    if (num2 < min_y) {
      min_y = num2;
    }
  }

  if (n < 1) {
    min_x = min_y = max_x = max_y = 0;
  } else {
    tmp1 = max_x - min_x;
    tmp2 = max_y - min_y;
  }

  printf("%d", tmp1*tmp2);


}
