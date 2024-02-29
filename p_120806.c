#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    double tmp = 0.0;

    answer = ((double)num1/(double)num2) * 1000;
  printf("%d\n", answer);
    return answer;
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
  solution(a, b);

    // printf("%d\n", solution(a, b));

    return 0;
}
