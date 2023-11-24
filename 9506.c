#include <stdio.h>

int main(void) {

  int n, cnt = 0, tmp = 0; //j : 약수 개수 
  int arr[1000] = {0,};

  while(1) {

    scanf("%d", &n);
    
    if(n != -1) {
      for(int i=1; i<=n/2; i++) {
        if(n % i == 0) {
          arr[cnt] = i;
          cnt++;
          tmp += i;
        }
      }

      if(tmp == n) {
        printf("%d = ", n);
        for(int z=0; z<cnt-1; z++) {
          printf("%d + ", arr[z]);
        }
        printf("%d\n", arr[cnt-1]);
      } else {
        printf("%d is NOT perfect.\n", n);
      }

      tmp = cnt = 0;
    }
      
    else
      break;
  }
}
