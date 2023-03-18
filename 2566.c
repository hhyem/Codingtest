#include <stdio.h>

int main() {
  int a[9][9] = {0,};
  int max = 0;
  int row = 0; 
  int column = 0;

  for(int i=0; i<9; i++) {
    for (int j=0; j<9; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  for(int i=0; i<9; i++) {
    for (int j=0; j<9; j++) {
      if(max < a[i][j]) {
        max = a[i][j];
        row = i;
        column = j;
      }
    }
  }

  printf("%d\n", max);
  printf("%d %d\n", row+1, column+1);
}
