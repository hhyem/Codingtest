#include <stdio.h>

int main() {
  int num[10];
  int tmp = 0;

  for(int i=0; i<10; i++){ 
    scanf("%d", &num[i]); 
    num[i] %= 42;
  }

  for(int i=0; i<10; i++) {
    int count = 0;
    for(int j = i+1; j<10; j++) {
      if(num[i] == num[j]) count++;
    }
    if(count==0) tmp += 1;
  }

  printf("%d\n", tmp);
}
