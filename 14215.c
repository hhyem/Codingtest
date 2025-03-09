#include <stdio.h>

int main() {

  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);

  //최대값구하기
  int max = a;
  if (max < b){
    max = b;
  } 
  if (max < c){
    max = c;
  }

  int tmp = a+b+c-max;

  if (max < tmp) {
    printf("%d\n", a+b+c);
  } else {
    max = tmp - 1;
    printf("%d\n", max+tmp);
  }
  
  return 0;
}
