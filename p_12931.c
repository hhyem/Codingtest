#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(n>=10) {
        answer+=n%10;
        n/=10;
    }
    answer+=n;
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    solution(n);
}
