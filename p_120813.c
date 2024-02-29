#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int len = 0;
    if(n % 2 == 0)
        len = n/2;
    else
        len = n/2+1;
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = calloc(len, sizeof(int));
    int j = 0;
    
    for(int i=1; i<=n; i+=2) {
        answer[j] = i;
        j+=1;        
    }
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    solution(n);
}
