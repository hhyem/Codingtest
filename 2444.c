#include <stdio.h>

int star2(int, int, int);

int star1(int n, int index, int star) {
  for(int i=1; i<=n; i++) { 
    //int index = (tmp - i) / 2; 
    for(int x=0; x<index; x++) 
      printf(" ");
    for(int y=0; y<star; y++)
      printf("*");
    if(i == n) 
      break;
    star+=2;
    index-=1;
    printf("\n");
  }

  printf("\n");
  star2(n, index, star);

  return 0;
}

int star2(int n, int index, int star) {
  index+=1;
  star-=2;
  for(int i=n; i>1; i--) { 
    for(int x=0; x<index; x++) 
      printf(" ");
    for(int y=0; y<star; y++)
      printf("*");
    star-=2;
    index+=1;
    printf("\n");
  }

  return 0;
}

int main(void) {
  int n;
  scanf("%d", &n);     //5
  int tmp = 2 * n - 1; //9
  int star = 1;         
  int index = n - 1;   //4

  star1(n, index, star);
}
