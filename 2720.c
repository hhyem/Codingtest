#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

  //케이스 개수
  int T;
  scanf("%d", &T);

  int tnum[1000]; //받은 돈
  int change_arr[5] = {0,0,0,0,}; //거스름돈 개수

  for(int i=0; i<T; i++) {
    scanf("%d", &tnum[i]);
  }
  
  for(int i=0; i<T; i++) {
    while(tnum[i] >= 25) {
      change_arr[0] = tnum[i] / 25;
      tnum[i] = fmod(tnum[i], 25);
    }
    while(tnum[i] >= 10) {
      change_arr[1] = tnum[i] / 10;
      tnum[i] = fmod(tnum[i], 10);
    }
    while(tnum[i] >= 5) {
      change_arr[2] = tnum[i] / 5;
      tnum[i] = fmod(tnum[i], 5);
    }
    while(tnum[i] >= 1) {
      change_arr[3] = tnum[i] / 1;
      tnum[i] = fmod(tnum[i], 1);
    }

    for(int i=0; i<4; i++) 
      printf("%d ", change_arr[i]);

    printf("\n");


    for(int i=0; i<4; i++)
      change_arr[i] = 0;
  }
}
