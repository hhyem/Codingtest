#include <stdio.h>

int main() {
    int num, cnt = 0;
     scanf("%d", &num);

    int num2[100];

    while(num >= 1) {
        num2[cnt] = num%10;
        num /= 10;
        cnt += 1;
    }

    int temp ;

    for(int i=0; i< cnt; i++) {
        for(int j=0; j<cnt; j++) {
            if(num2[i] > num2[j]) {
                temp = num2[i];
                num2[i] = num2[j];
                num2[j] = temp;
            }
        }
    }

    for(int i=0; i<cnt; i++) {
        printf("%d", num2[i]);
    }
    
}
