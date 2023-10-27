#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  char *str;
  str = calloc(1000000, sizeof(char));
  scanf("%s", str);

  int size = strlen(str);

  char alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  int cnt[26];
  for(int i=0; i<26; i++) {
    cnt[i] = 0;
  }

  //소문자->대문자
  for(int i=0; i<size; i++) {
    if(str[i]>='a' && str[i]<='z')
      str[i]-=32;
  }

  //빈도수 세기
  for(int i=0; i<size; i++) {
    for(int j=0; j<26; j++) {
      if(str[i] == alpha[j]) {
        cnt[j]++;
      }
    }
  }
  
  //최대값 출력
  int max = 0;
  char tmp;
  for(int i=0; i<26; i++) {
    if(cnt[i] > max) {
      max = cnt[i];
      tmp = alpha[i];
    }
    else if(cnt[i] == max) {
      tmp = '?';
    }
  }

  printf("%c\n", tmp);

  free(str);
}
