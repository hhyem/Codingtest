#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  
  int n, a[100], sum = 0;
  for(int i = 0; i < num; i++) {
    sum = 0;
    scanf("%d", &n);
    for(int j = 0; j < n; j++) {
      scanf("%d", &a[j]);
      sum += a[j];
    }
    printf("%d\n", sum);
  }
}
