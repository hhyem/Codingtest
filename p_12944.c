#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    
    for(int i=0; i<arr_len; i++) {
        answer += arr[i];
    }
    answer /= arr_len;
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = calloc(n, sizeof(int));
    
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[n]);
    }
    
    solution(arr, n);
}
