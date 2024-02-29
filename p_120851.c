#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0, t;
    
    char s[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int len = strlen(my_string);
    
    for(int i=0; i<len; i++){
        for(int j=0; j<10; j++) {
            if(my_string[i] == s[j]) {
                answer+=j;
                break;
            }
        }
    }
    
    return answer;
}

int main() {
    char str;
    scanf("%s", &str);
    
    solution(str);
}
