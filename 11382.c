#include <stdio.h>

int main() {
  unsigned long a, b, c;
  scanf("%lu", &a);
  scanf("%lu", &b);
  scanf("%lu", &c);

  unsigned long sum = a+b+c;
  printf("%lu\n", sum);
}
