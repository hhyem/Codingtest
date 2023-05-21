#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int *score;
  score = calloc(sizeof(int), n);

  for(int i=0; i<n; i++) {
    scanf("%d", &score[i]);
  }

  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(score[i] < score[j]) {
        int tmp = score[j];
        score[j] = score[i];
        score[i] = tmp;
      }
    }
  }

  for(int i=0; i<n; i++) {
    printf("%d\n", score[i]);
  }

  printf("%d\n", score[k-1]);
  
}
