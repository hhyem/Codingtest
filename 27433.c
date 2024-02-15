#include <stdio.h>

long func(int n) {
  long t = 1;

  while(n > 0) {
    t *= n;
    n--;
    func(n);
  }
  return t;
}

int main(void) {

  int n;
  scanf("%d", &n);
  if(0 <= n && n <= 20) {
    printf("%ld\n", func(n));
  } 
}
