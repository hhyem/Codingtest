#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int k) {
    int len = arr_len, j = 0;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = calloc(len, sizeof(int));
    
    if(k % 2 != 0) {
        for(int i=0; i<len; i++) 
            answer[i] = arr[i] * k;
    } else
        for(int i=0; i<len; i++)
            answer[i] = arr[i] + k;
    return answer;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int *array = calloc(n, sizeof(int));
    
    solution(array, n, k);
}
