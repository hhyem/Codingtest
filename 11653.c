#include <stdio.h>

int main(void) {

  //A : 소인수분해한 값 넣을 배열
  //T : 분해한 소인수들을 저장할 배열의 첨자용 변수
  int num, A[20], T = 0;
  scanf("%d", &num);

  do {
    if(num >= 2) {
      int P = 2; //num을 나누는 수(2~N)
      //2~N까지 num과 p 나누기
      for(; P<=num; P++) {
        if(num%P==0) //만약 0이라면 소수인
          break;
      }

      //T번째에 P 넣기
      A[T] = P;
      //num에 P로 나눈 몫 넣기
      num/=P;
      T++;
    }
    else //num이 1이하라면 나가기 
      return 0;
  } while(num != 1);

  if(T == 1)
    printf("%d\n", A[0]);
  else {
    for(int j=0; j<T-1; j++) 
      printf("%d\n", A[j]);
    printf("%d\n", A[T-1]);
  }
}
