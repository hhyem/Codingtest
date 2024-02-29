#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int t = n/7;
    
    if(n > 7 && n%7 != 0)
        answer = t+1;
    else if(n<7)
         answer = 1;
    else
        answer = t;
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    solution(n);
}
