#include <stdio.h>
#include <stdlib.h>

//배열 개수를 입력받고 중앙값을 구한다면?
int main(void) {
  int n;
  scanf("%d", &n);

  int *num;
  num = calloc(n, sizeof(int));
  
  int sum = 0;
  
  for(int i=0; i<n; i++) {
    scanf("%d", &num[i]);
    sum += num[i];
  }

  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(num[i] > num[j]) {
        int tmp = num[j];
        num[j] = num[i];
        num[i] = tmp;
      }
    }
  }

  int mid = n/2;
  printf("%d\n", sum/n);
  printf("%d\n", num[mid]);

  free(num);
}
