#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    double tmp = 0;
    
    tmp = sqrt(n);
    answer = sqrt(n);
    
    if(tmp - (int)answer == 0) {
        answer+=1;
        answer*=answer;
    } else {
        answer = -1;
    }
    
    return answer;
}

int main() {
    long long n;
    scanf("%lld", &n);
    
    solution(n);
}
