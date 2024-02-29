#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int max = 0, t, tmp = 0;
    int len = sides_len;
    
    for(int i=0; i<len; i++) {
        if(max < sides[i]) {
            max = sides[i];
            t = i;            
        }
    }
    
    for(int i=0; i<len; i++) {
        if(t != i) {
            tmp += sides[i];
        }
        else {
            continue;           
        }
    }
    
    printf("%d %d\n", max, tmp);
    
    if(max < tmp)
        answer = 1;
    else
        answer = 2;
    
    return answer;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int sides[3] = {a, b, c};
    
    solution(sides, 3);
}
