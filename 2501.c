#include <stdio.h>

int main(void) {

  int n, k, tmp = 0;
  scanf("%d %d", &n, &k);
  int *num;
  num = calloc(sizeof(int), n);

  for(int i=1; i<=n; i++) {
    if(n % i == 0) {
      num[tmp] = i;
      tmp += 1;
    }
  }

  printf("%d\n", num[k-1]);
}
