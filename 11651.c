#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x, y;
} Point;

int compare(const void *a, const void *b){
  Point p1 = *(Point*)a, p2 = *(Point*)b;

    if (p1.y < p2.y)
        return -1;
    else if (p1.y > p2.y)
        return 1;
    else {
        if (p1.x < p2.x)
            return -1;
        else if (p1.x > p2.x)
            return 1;
        return 0;
    }
}

int main(void) {
  int n;
  scanf("%d", &n);

  Point p[n];

  for(int i=0; i<n; i++) {
    scanf("%d %d", &p[i].x, &p[i].y);
  }

  qsort(p, n, sizeof(Point), compare);

  for(int i=0; i<n; i++) {
    printf("%d %d\n", p[i].x, p[i].y);
  }

}
