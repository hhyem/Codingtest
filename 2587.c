#include <stdio.h>

int main(void) {
  int num[5];
  int sum = 0, mid = 0;
  
  for(int i=0; i<5; i++) {
    scanf("%d", &num[i]);
    sum += num[i];
  }

  for(int i=0; i<5; i++) {
    for(int j=i+1; j<5; j++) {
      if(num[i] > num[j]) {
        int tmp = num[j];
        num[j] = num[i];
        num[i] = tmp;
      }
    }
  }
  printf("%d\n", sum/5);
  printf("%d\n", num[2]);
}
