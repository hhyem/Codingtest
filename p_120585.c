#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int height) {
    int answer = 0;
    
    for(int i=0; i<array_len; i++) {
        if(array[i] > height)
            answer+=1;
    }
    return answer;
}

int main() {
    int len;
    scanf("%d", &len);
    
    int *array;
    array = calloc(len, sizeof(int));
    
    for(int i=0; i<len; i++) {
        scanf("%d", &array[i]);
    }
    
    int height;
    scanf("%d", &height);
    
    printf("%d\n", solution(array, len, height));
    
    free(array);
}
