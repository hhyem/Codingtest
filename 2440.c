#include <stdio.h>

int main() {

  int cnt = 0;
  scanf("%d", &cnt);

  for(int i = 0; i<cnt; i++) {
    for(int j = cnt; j >0; j--) {
      if(j >= i) 
        printf("*");
    }
    printf("\n");
  }
}
  
