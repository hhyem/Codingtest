#include <stdio.h>

int main() {
	int num[9];
	for(int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
	}

	int max = -1000000;
	int j, k;
	for(int i = 0; i < 9; i++) {
		if (max < num[i]) 
			max = num[i];
		if(max == num[i])
			k = i+1;
	}
}
