#include <stdio.h>

int main(void) {
  int cnt, tmp;
  int list[100] = {0, };
  scanf("%d", &cnt);

  for(int i=0; i<cnt; i++) 
    scanf("%d", &list[i]);
    
  for(int i=0; i<cnt; i++) {
     for(int j=0; j<cnt-1; j++) {
        if(list[j] > list[j+1]) {
           tmp = list[j];
           list[j] = list[j+1];
           list[j+1] = tmp;
         }
      }
   }
   
   for(int i=0; i<cnt; i++) 
      printf("%d\n", list[i])
}
