#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int int_cmp(const int *a, const int *b) {
  if(*a < *b)
    return -1;
  else if(*a > *b)
    return 1;
  else
    return 0;
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int len = array_len;
    
    qsort(array, len, sizeof(int), (int(*)(const void *, const void *)) int_cmp);
    
    answer = array[len/2];
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
