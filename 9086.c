#include <stdio.h>
#include <string.h>

int main(void) {
  int n;
  scanf("%d", &n);
  char s[10][1000];
  char s_print[10][1000];

  for(int i=0; i<n; i++) {
    scanf("%s", &s[i]);
  }

  for(int i=0; i<n; i++) {
    int length = strlen(s[i]);
    printf("%c%c\n", s[i][0], s[i][length-1]);
  }
}
