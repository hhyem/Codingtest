#include <stdio.h>

int main() {

    int n, cnt = 0;
    scanf("%d", &n);

    while(1) {
        if(n%5==0) {
            cnt += n/5;
            break;
        }
        else {
            n-=3; 
            cnt+=1;
            if(n<0 || n==0) 
                break;
        }

    }
    if(n<0) 
        cnt = -1;

    printf("%d\n", cnt);

}
