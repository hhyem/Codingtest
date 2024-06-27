#include <stdio.h>

int main(void) {

  int arr[100][100] = {0,};

  int n, a, b, count = 0;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);
    for(int i=b; i<b+10; i++) {
      for(int j=a; j<a+10; j++) {
        arr[i][j] = 1;
      }
    }
  }

  for(int i = 0; i < 100; i++) {
    for(int j=0; j<100; j++) {
      if(arr[i][j] == 1)
        count++;
    }
  }

  printf("%d\n", count);
}
