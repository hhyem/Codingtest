#include <stdio.h>

int main() {
  int input, score, num;
  char test[80];
  
  scanf("%d", &input);
  
  for(int i = 0; i < input; i++) {
    sum = 0;
    score = 1;
    scanf("%s", &test); //ooo oox
    
    for(int j = 0; j < strlen(test); j++) {
      if(test[j] == 'o'){
        sum += score;
        score++;
      }
      if (test[j] == 'x') {
        score = 1;
        sum = 0;
      }
   }
   printf("%d\n", sum);
}
