#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int x, y;
  scanf("%d %d", &x, &y);
  int day[13] = {0,};
  char str[8][4] = {"MON", "TUE","WED","THU","FRI","SAT","SUN"};

  for(int i=1; i<13; i++) {
    if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
      day[i] = 31;
    else if(i == 2)
      day[i] = 28;
    else
      day[i] = 30;
  }

  int days = 0;
  for(int i=1; i<x; i++) {
    days += day[i];
  }

  days += (y-1);

  days %= 7;

  printf("%s\n", str[days]);

}
