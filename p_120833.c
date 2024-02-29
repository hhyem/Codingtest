#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(numbers_len);
    int t = 0;
    
    for(int i=num1; i<=num2; i++) {
        answer[t] = numbers[i];
        t+=1;
    }
    return answer;
}

int main() {
    int n, a, b;
    scanf("%d", &n);
    
    int *nums;
    nums = calloc(n, sizeof(int));
    
    for(int i=0; i<n; i++) 
        scanf("%d", &nums[i]);
    
    scanf("%d %d", &a, &b);
    
    solution(nums, n, a, b);
}
