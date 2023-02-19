#include <stdio.h> 
int main() {
	int N;
	scanf("%d", &N);
	int num[1000];
	int i = 0;

	while(1){
		scanf("%d", &num[i]);
		if (num[i] == 0) {
			break;
		}
		if (num[i] % N == 0) {
			printf("%d is a multiple of %d.\n", num[i], N);
		}
		else {
			printf("%d is NOT a multiple of %d.\n", num[i], N);
		}
	}
	i++;
}
