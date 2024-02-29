#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    int answer = 0;
    
    if(number % n == 0 && number % m == 0)
        answer = 1;
    else
        answer = 0;
    
    return answer;
}

int main() {
    int number, n, m;
    scanf("%d %d %d", &number, n, m);
    
    solution(number, n, m);
}
