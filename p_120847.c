#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int t = 0;
    int len = numbers_len;
    
    for(int i=0; i<len; i++) {
        for(int j=i+1; j<len; j++) {
            t = numbers[i] * numbers[j];
            if(t > answer)
                answer = t;
        }
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
    
    return 0;
}
