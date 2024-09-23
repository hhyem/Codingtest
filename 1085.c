#include <stdio.h>

int main() {

  int x, y, h, w;
  scanf("%d %d %d %d", &x, &y, &w, &h);

  int line[4] = {};

  line[0] = h-y;
  line[1] = x;
  line[2] = w-x;
  line[3] = y;

  int min = 1000;
  for (int i=0; i<4; i++) {
    if(min > line[i])
      min = line[i];
  }

  printf("%d\n", min);

}
