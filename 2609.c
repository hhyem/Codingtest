#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int max;
	if (a > b)
		max = b;
	else
		max = a;

  int temp = 0;
	//최대공약수
  for(int i=1; i<=max; i++) {
    if( a%i==0 && b%i==0) {
      temp = i;
      if (temp < i) {
        temp = i;
      }
    }
  }
  printf("최대 공약수 : %d\n", temp);

  //최소공배수
  for(int i = max; i<=a*b; i++) {
    if (i%a==0 && i%b == 0) {
      printf("최소 공배수 : %d\n", i);
      break;
    }
  }
}
