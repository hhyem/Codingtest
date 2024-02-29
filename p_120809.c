#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int len = numbers_len;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // int* answer = (int*)malloc(len);
    int* answer = calloc(len, sizeof(int));
    
    int t = 1;
    
    for(int i=0; i<len; i++) {
        t = numbers[i]*2;
        printf("%d %d\n", numbers[i], t);
        answer[i] = t;
        //printf("%d %d\n", t, answer[i]);
    }
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int* array = calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
        scanf("%d", &array[i]);
    
    solution(array, n);
}
