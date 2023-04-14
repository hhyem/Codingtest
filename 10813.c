#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m; //n : 공 개수, m : 교환할 횟수
  scanf("%d %d", &n, &m);
  int *a;
  a = (int*)malloc(sizeof(int) * n); //공 개수만큼 배열 생성 

  for(int i=0; i<n; i++) 
    a[i] = i+1; 
  
  int i, j;

  for(int b=0; b<m; b++) {
    scanf("%d %d", &i, &j);
    int tmp = a[i-1];
    a[i-1] = a[j-1];
    a[j-1] = tmp;
  }

  for(int i=0; i<n; i++) 
    printf("%d ", a[i]);

  free(a);
}
