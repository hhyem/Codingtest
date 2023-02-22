#include <stdio.h> 
int main() {

	int N, a, b, c;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == b)
			printf("#%d %d\n", i, c);
		else if (b == c)
			printf("#%d %d\n", i, a);
		else if (a == c)
			printf("#%d %d\n", i, b);
		else
			printf("#%d %d\n", i, a);
	}
}
