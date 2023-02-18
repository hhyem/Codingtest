#include <stdio.h>

int main() {
  int max, min, num[1000001] = {0, 1};
  scanf("%d %d", &min, &max);
  
  for(int i = 2; i <= max; i++) 
    for(int j=2; i*j <= max; j++)
      num[i*j] = 1;
  
  for(int i=min; i<=max; i++)
    if(!num[i]) printf("%d\n", i);
}
