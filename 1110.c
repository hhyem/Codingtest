#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int divide10, divide1 = 0;
	int new_num, cnt, sum = 0;

	new_num = num;
	while(1) {
		divide10 = num / 10;
		divide1 = num % 10;
		sum = divide10 * 10 + num;
		if (sum < 10) 
			num = divide1 * 10 + sum;
		else 
			num = divide1 * 10 + (sum %= 10);
		cnt += 1;
		if (new_num == num) 
			break;
	}
	printf("%d", cnt);
}
