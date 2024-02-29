#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(n > 0) {
        if(n % 2 == 0)
            answer += n;
        n-=1;
    }
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d\n", solution(n));
}
