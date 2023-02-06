#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);
	int j;
	int max = -1000000;
	int min = 1000000;

	for (int i = 0; i< num; i++) {
		scanf("%d", &j);
		if(min > j) 
			min = j;
		if(max < j) 
			max = j;
	}
	printf("%d %d", min, max);
}
