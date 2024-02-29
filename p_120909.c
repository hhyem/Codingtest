#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int answer = 0;
    int t = sqrt(n);
    
    if(t * t == n)
        answer = 1;
    else
        answer = 2;
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    solution(n);
}
