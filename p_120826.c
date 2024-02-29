#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
    int len = strlen(my_string);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = calloc(len, sizeof(char));
    char t = letter[0];
    int j = 0;

    for(int i=0; i<len; i++) {
        if(my_string[i] != letter[0]) {
          answer[j] = my_string[i];
            j+=1;
        }
        else {
            continue;
        }
    }
    
    return answer;
}

int main() {
    char str, f;
    scanf("%s %c", &str, &f);

    solution(&str, &f);
}
