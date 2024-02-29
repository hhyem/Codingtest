#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
    answer = n / slice;
    if(n % slice != 0) {
        answer+=1;
    }
    
    return answer;
}

int main() {
    int slice, n;
    scanf("%d %d", &slice, &n);
    
    solution(slice, n);
}
