#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int answer = 0, c = 0;
    int t = sqrt(n); //반복 횟수
    
    for(int i=1; i<=t; i++) {
        for(int j=1; j<=n; j++) {
            if(i * j == n) {
                if(i == j) {
                    c = 1;
                }
                answer+=1;
            }
        }
    }

    if(c == 1) {
        answer = answer* 2 - 1;
    } else
        answer*=2;   
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    solution(n);
}
