#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = -1;
    
    if(num1 == num2) 
        return 1;
    else
        return -1;
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("%d\n", solution(a, b));
}
