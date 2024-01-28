#include <stdio.h>
#include <string.h>

int fun_check (char *str, int len) { //값을 가져오는거니까 * 붙이기 

  char strs[100];
  strcpy(strs, str);

  int alph[26][2] = {0,};
  for(int i=0; i<26; i++) 
    alph[i][0] = 0;

  int j = 0, tmp = 0;
  while(j < len) {
    if(strs[j] >= 'a' && strs[j] <= 'z') {
      alph[strs[j] - 'a'][0]++;
      if(alph[strs[j] - 'a'][0] > 1) {
        tmp = alph[strs[j] - 'a'][1];
        alph[strs[j] - 'a'][1] = j;
        if(alph[strs[j] - 'a'][1] - tmp != 1) { //나중에 나온 단어
          return 0;
        } 
      }
      else {
        alph[strs[j] - 'a'][1] = j;
      }
    }
    j +=1;
  }
  
  return 1;
}

int main() {

  int n, len, re, cnt = 0;
  scanf("%d", &n);
  char str[100] = "";

  for(int i=0; i<n; i++) {
    scanf("%s", str);
    len = strlen(str);
    re = fun_check(str, len);
    if (re != 0)
      cnt+=1;
  }

  printf("%d\n", cnt);
}
