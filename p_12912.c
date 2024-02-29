#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a > b) {
        int t = a;
        a = b;
        b = t;
    }
    
    for(int i=a; i<=b; i++)
        answer+=i;
    
    return answer;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    solution(a, b);
}
