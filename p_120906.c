#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int t = 0;
    
    while(n>9) {
        t = n%10;
        n/=10;
        answer+=t;
    }
    
    answer += n;
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    solution(n);
}
