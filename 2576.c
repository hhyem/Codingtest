#include <stdio.h>
int main(void) {
  int nums[8];
  int sum = 0, min = 100, cnt = 0;
  for(int i=0; i<7; i++) 
    scanf("%d", &nums[i]);
  
  for(int i=0; i<7; i++) {
    if (nums[i] % 2 == 1) {
      sum += num[i];
      if(min > nums[i])
        min = nums[i]
      cnt += 1;
     }
  }
  if(cnt != 0) {
    printf("%d\n", sum);
    printf("%d\n", min);
  }
  if(cnt == 0)
    printf("-1\n");
}
