#include <stdio.h>
#include <string.h>
#include <stdlib.h.

int main() {
  char str[100];
  int sum = 0;
  scanf("%s", str);
  char *ptr = strtok(str, " ");
  
  while(ptr != NULL) {
    sum += atoi(ptr);
    ptr = strtok(NULL, ",");
  }
  
  printf("%d\n", sum);
}
