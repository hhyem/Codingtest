#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
    int answer = 0;
    
    answer = 2022-age+1;
    return answer;
}

int main() {
    int age;
    scanf("%d", &age);
    
    printf("%d\n", solution(age));
}
