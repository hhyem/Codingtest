#include <stdio.h>
#include <string.h>

int main(void) {

  char str[100];
  char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
  int alpha_num[26] = {-1,};

  for(int i=0; i<26; i++) 
    alpha_num[i] = -1;
  
  scanf("%s", str);
  int len = strlen(str);

  for(int i=0; i<len; i++) {
    for(int j=0; j<26; j++) {
      if(alpha_num[j] != -1)
        continue;
      else if(str[i] == alpha[j]) {
        alpha_num[j] = i;
        break;
      }
    }
  }

  for(int i=0; i<26; i++)
    printf("%d ", alpha_num[i]);
}
