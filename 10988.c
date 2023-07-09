#include <stdio.h>
#include <string.h>

//팰림드롬 : 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어 

int main(void) {

  char str[100], re_str[100] = "";
  scanf("%s", str);

  int str_len, tmp;
  str_len = strlen(str);
  tmp = str_len;

  //str의 끝에서부터
  //re_str의 앞에서부터 넣기 
  for(int i=0; i<tmp; i++) {
    re_str[i] = str[str_len-1];
    str_len-=1;
  }

  if(strcmp(str, re_str) == 0)
    printf("1");
  else
    printf("0");
  
}
