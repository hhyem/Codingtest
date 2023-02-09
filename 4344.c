#include <stdio.h>

int main() {
  int class;
  scanf("%d", &class);
  int student;
  int score[100];
  double avg = 0.0, sum = 0.0;
  for(int i = 0; i < class; i++) {
    scanf("%d", &student);
    sum = 0, avg = 0;
    for(int j = 0; j < student; j++) {
      scanf("%d", &score[j]);
      sum += score[j];
    }
    avg = sum / student;
    int cnt = 0;
    for(int j = 0; j < student; j++) {
      if(score[j] > avg) cnt += 1;
    }
    printf("%.3lf%%\n", ((double)cnt / (double)student) * 100);
  }
}
