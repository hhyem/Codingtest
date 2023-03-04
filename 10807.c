#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  scanf("%d", &a);
  int *b;
  b = calloc(a, sizeof(int));

  for(int i=0; i<a; i++) {
    scanf("%d", &b[i]);
  }

  int c, sum = 0;
  scanf("%d", &c);
  for(int i=0; i<a; i++) {
    if(b[i] == c)
      sum += 1;
  }

  printf("%d\n", sum);
  free(b);
}
