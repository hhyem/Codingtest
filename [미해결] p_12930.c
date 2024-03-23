//만약 단어 사이에 공백이 2개 이상이라면, 그 개수만큼 결과값에도 띄워줘야 함
//근데 내 코드는 공백 1개를 가정하고 만들었기 때문에 공백개수만큼 j를 증가시키든지 해야함
//미해결...

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int size = strlen(s);
    char* answer = calloc(size, sizeof(char));
    int tmp = 0, j = -1;
    
    char *ptr = strtok(s, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

    while (ptr != NULL) {             // 자른 문자열이 나오지 않을 때까지 반복
        j+=1;
        for(int i=j; i<strlen(ptr)+j; i++) {
            if(i % 2 == 0) 
                answer[i] = s[i] - 32;
            else if(i % 2 == 1) 
                answer[i] = s[i];
            tmp = i+1;
        }
        j = tmp;
        if(j == size) 
            break;
        else 
            answer[j] = ' '; //다음 공백 

        ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
    }

    return answer;
}

int main() {
    char str;
    scanf("%s", &str);
    
    solution(&str);
}
