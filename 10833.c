#include <stdio.h> 
int main() {
	int N;
	scanf("%d", &N);
	int stu, apple;
	int nam;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &stu, &apple);
		nam = apple % stu;
		sum += nam;
	}
	printf("%d", sum);
}
