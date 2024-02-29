#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct{
    int x, y;
} Point;

int compare(const void *a, const void *b){
    Point p1 = *(Point*)a, p2 = *(Point*)b;
    if (p1.x < p2.x)
        return -1;
    else if (p1.x > p2.x)
        return 1;
    else {
        if (p1.y < p2.y)
            return -1;
        else if (p1.y > p2.y)
            return 1;
        return 0;
    }
}

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    int n = num_list_len;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = calloc(5, sizeof(int));
    
    qsort(num_list, n, sizeof(int), compare);
    for(int i=0; i<5; i++)
        answer[i] = num_list[i];
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int *array = calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
        scanf("%d", &array);
    
    solution(array, n);
}
