#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 문제의 알고리즘은 항상 A[n/2] 한 번 접근하는 구조이므로,
    // 코드1 수행 횟수는 항상 1이고, 시간 복잡도는 O(1), 즉 차수는 0
    printf("1\n");    // 코드1의 실제 수행 횟수
    printf("0\n");    // 다항식 최고차항의 차수

    return 0;
}
