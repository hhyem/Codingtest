#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  int tmp = 1;

  unsigned int answer = tmp + (tmp*n) + ((tmp*n) * 2) + (((0.5) * (n-1)) * 2);

  printf("%u\n", answer);

}
