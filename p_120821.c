#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(num_list_len);
    int t = num_list_len / 2; //역순 수행할 반복 횟수
    
    for(int i=0; i<t; i++) {
        int s = num_list[i];
        num_list[i] = num_list[num_list_len-i-1];
        num_list[num_list_len-i-1] = s;
    }
    
    return num_list;
}

int main() {
    
    int len;
    scanf("%d", &len);
    
    int *array;
    array = calloc(len, sizeof(int));
    
    for(int i=0; i<len; i++) {
        scanf("%d", &array[i]);
    }
    
    solution(&array, len);
}
