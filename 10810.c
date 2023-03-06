#include <stdio.h>
#include <stdlib.h>

int main() {
  int N; //바구니 개수
  int M; //바구니 범위
  int i, j, k;

  scanf("%d %d", &N, &M);
  
  int *ball;
  ball = calloc(N, sizeof(int));
  if(ball == NULL)
    printf("메모리 할당 실패");

  for(int a=0; a<M; a++) {
    scanf("%d %d %d", &i, &j, &k);
    for(int b=i-1; b<j; b++) {
      ball[b] = k;
    }
  }

  for(int a=0; a<N; a++) {
    printf("%d ", ball[a]);
  }

  free(ball);
}
