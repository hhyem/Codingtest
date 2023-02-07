#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int score[1000];
  int max = 0;
  
  for(int i = 0; i < num; i++) {
    scanf("%d", &score[i]);
    if(score[i] > max) {
      max = score[i];
    }
  }
  
  double new_score[100];
  double avg = 0;
  for(int i = 0; i < num; i++) {
    new_score[i] = (double)score[i] / max * 100;
    avg += new_score[i] / num;
  }
  printf("%lf", avg);
  
}
