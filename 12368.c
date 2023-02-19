#include <stdio.h> 
int main() {

	int N, A, B, r = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d %d", &A, &B);
		r = A + B;
		if (r < 24) {
			printf("#%d %d\n",i , r);
		}
		else if (r == 24) {
			printf("#%d 0\n", i);
		}
		else if (r > 24) {
			r -= 24;
			printf("#%d %d\n",i , r);
		}
	}
}
