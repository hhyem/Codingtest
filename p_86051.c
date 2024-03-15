#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int *temp = calloc(sizeof(int), 10);
    int check = 0;

    for(int i=0; i<numbers_len; i++) {
        check = numbers[i];
        temp[check] = 1;
    }
    
    for(int i=0; i<10; i++) {
        if(temp[i] == 0) 
            answer += i;
    }
    
    //없는 숫자는 아예 비교조차 안되는 문제 발생
    // for(int i=0; i<numbers_len; i++) {
    //     check = 0;
    //     for(int j=0; j<10; j++) {
    //         if(numbers[i] == nums[j]) { 
    //             break;
    //         } else {
    //             check += 1;
    //             printf("%d %d\n", numbers[i], nums[j]); 
    //         }
    //     }
    //     if(check == 9)
    //         printf("없 : %d\n", numbers[i]);
    // }
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr;
    arr = calloc(sizeof(int), n);
    
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    solution(arr, n);
}
