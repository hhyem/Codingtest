#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    int answer = 1;
    
    for(int i=0; i<t; i++) {
        n = n * 2;     
    }
        
    answer = n;
    
    return answer;
}

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    
    solution(n, t);
}
