#include <stdio.h>
#include <stdlib.h>

int func(int a) { //소수인지 판별

  int flag = 1;
  //1부터 a-1까지 for문 돌려서
  //나누어 떨어지면 소수아님 
  for(int i=2; i<a; i++) {
    if(a % i == 0) {
      flag = 0; //소수 아님 
      break;
    }
  }

  // printf("%d %d\n", a, flag);

  return flag;
}

int main(void) {

  int n, tmp = 0;
  scanf("%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for(int i=0; i<n; i++) {
    if(arr[i] > 1) {
      if(func(arr[i]) == 1)
        tmp +=1;
    }
    
  }

  printf("%d\n", tmp);

}
