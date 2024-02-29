#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int t = 0, a = 0, b = 0;
    b = x;
    
    while(x>=10) {
        t = x%10;
        x/=10;
        a+=t;
    }
    a+=x;
    
    if(b % a == 0)
        answer = true;
    else
        answer = false;
    
    return answer;
}

int main() {
    int n;
    scanf("%d", &n);
    
    solution(n);
}
