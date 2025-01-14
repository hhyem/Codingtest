#include <stdio.h>

int main() {

  int x,y,z;
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  if((x==60) && (y==60) && (z==60)) {
    printf("Equilateral");
  } else if((x+y+z==180) & ((x==y)||(x==z)||(y==z))) {
    printf("Isosceles");
  } else if((x+y+z==180) & ((x!=y)||(x!=z)||(y!=z))) {
    printf("Scalene");
  } else if(x+y+z!=180) {
    printf("Error");
  }
}
