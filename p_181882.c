#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    int len = arr_len;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = calloc(len, sizeof(int));
    
    for(int i=0; i<len; i++) {
        if(arr[i] >= 50 && arr[i] % 2 == 0)
            answer[i] = arr[i] / 2;
        else if(arr[i] < 50 && arr[i] % 2 != 0)
            answer[i] = arr[i] * 2;
        else
            answer[i] = arr[i];
    }
    
    return answer;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int *array = calloc(n, sizeof(int));
    
    solution(array, n);
}
