#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x, y;
} Point;

int compare(const void *a, const void *b){
    Point p1 = *(Point*)a, p2 = *(Point*)b;
    if (p1.x < p2.x)
        return -1;
    else if (p1.x > p2.x)
        return 1;
    else {
        if (p1.y < p2.y)
            return -1;
        else if (p1.y > p2.y)
            return 1;
        return 0;
    }
}

int binsearch(int data[], int n, int key) {
  int low, high, mid;
  low = 0;
  high = n-1;
  while(low <= high) {
    mid = (low + high) / 2;
    if(key == data[mid]) {
      return mid;
    } else if (key < data[mid]) {
      high = mid - 1;
    } else if (key > data[mid]) {
      low = mid + 1;
    }
  }
  return -1;
}

int main(void) {

  int n;
  scanf("%d", &n);

  int *arr, *ans;
  arr = (malloc)(sizeof(int) * n);
  int index;

  for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, n, sizeof(int), compare);

  int m;
  scanf("%d", &m);
  int key = 0;
  ans = (malloc)(sizeof(int) * m);

  for(int i=0; i<m; i++) {
    scanf("%d", &key);
    index = binsearch(arr, n, key);
    if(index == -1) 
      ans[i] = 0;
    else 
      ans[i] = 1;
  }

  for(int i=0; i<m; i++) 
    printf("%d ", ans[i]);

  free(arr);
  free(ans);

  return 0;
}
