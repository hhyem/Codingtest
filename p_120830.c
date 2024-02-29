#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    if(n>=10) {
        int t = n/10;
        k-=t;
    }
    
    
    answer = (n*12000) + (k*2000);
    return answer;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    solution(n, k);
}
