#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  float score;
  char s_grade[10];
} class;

typedef struct {
  char s_grade[10];
  float score;
} grade;

int main(void) {

  class c[20] = {};
  float g_sum = 0.0, sum = 0.0;

  grade g[] = {
    {"A+", 4.5},
    {"A0", 4.0},
    {"B+", 3.5},
    {"B0", 3.0},
    {"C+", 2.5},
    {"C0", 2.0},
    {"D+", 1.5},
    {"D0", 1.0},
    {"F", 0.0}
  };

  for(int i=0; i<20; i++) {
    scanf("%s %f %s", &c[i].name, &c[i].score, &c[i].s_grade);
    if(strcmp(c[i].s_grade, "P")==0)
      continue;
    else
      g_sum += c[i].score;
  }

  //학점 = (c->score * g->score) / g_sum
  for(int i=0; i<20; i++) {
    for(int j=0; j<9; j++) {
      if(strcmp(c[i].s_grade, g[j].s_grade)==0) {
        sum = sum + (c[i].score * g[j].score);
        break;
      } else if(strcmp(c[i].s_grade, "P")==0) 
        continue;
    }
  }

  sum /= g_sum;
  printf("%f\n", sum);
  
  return 0;
}
