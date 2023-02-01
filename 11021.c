#include<stdio.h>
int main(){
    int num;
	scanf("%d", &num);
	int num1, num2;

	for (int i = 1; i <= num; i++) {
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d\n",i, num1 + num2);
	}
}
