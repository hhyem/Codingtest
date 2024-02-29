#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// s1_len은 배열 s1의 길이입니다.
// s2_len은 배열 s2의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
    int answer = 0;
    int len1 = s1_len, len2 = s2_len;
    
    for(int a = 0; a<len1; a++) {
        for(int b=0; b<len2; b++) {
            if(strcmp(s1[a], s2[b]) == 0) {
                answer+=1;                
            }
        }
    }
    return answer;
}

int main() {
    int s1, s2;
    scanf("%d", &s1);
    scanf("%d", &s2);
    
    char* array1 = calloc(s1, sizeof(char));
    char* array2 = calloc(s1, sizeof(char));
    
    for(int i=0; i<s1; i++) 
        scanf("%s", &array1[i]);
    
    for(int i=0; i<s2; i++) 
        scanf("%s", &array2[i]);
    
    solution(array1, s1, array2, s2);
}
