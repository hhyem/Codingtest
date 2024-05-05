#include <stdio.h>
#include <stdlib.h>

//소수인지 판별
int func(int a) {

  int flag = 1;
  //1부터 a-1까지 for문 돌려서
  //나누어 떨어지면 소수아님 
  for(int i=2; i<a; i++) {
    if(a % i == 0) {
      flag = 0; //소수 아님 
      break;
    }
  }

  return flag;
}

int main(void) {
  //소수 합과 최소값 찾기 

  int n, m, sum = 0;
  scanf("%d\n%d", &n, &m);

  int *arr = calloc(sizeof(int), 10);
  arr[0] = 10001;

  for(int i=n; i<=m; i++) {
    if(i < 2) {
      continue;
    }
    else {
      if(func(i) == 1) { //소수일 때 
        sum+=i;
        if(arr[0] > i) {
          arr[0] = i;
        }
      }
    }
  }

  if(sum != 0) 
    printf("%d\n%d\n", sum, arr[0]);
  else
    printf("-1");
}
