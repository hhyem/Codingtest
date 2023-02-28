#include <stdio.h>

int main() {
    int a, b, c, sum, max;
    scanf("%d %d %d\n", &a, &b, &c);
    if(a==b && a==c && b==c) 
        sum = 10000+a*1000;
    else if(a==b && a!=c && b!=c) //a b가 같을 때
        sum = 1000+a*100;
    else if(a==c && a!=b && b!=c) //a c 같을 때
        sum = 1000+a*100;
    else if(b==c && a!=b && a!=c) //b c 같을 때
        sum = 1000+b*100;
    else {
        if (a> b) {
            if(a>c) 
                max = a;
            else 
                max = c;
        }
        else {
            if(b>c)
                max = b;
            else
                max = c;
        }
        sum = max*100;
    }
    printf("%d", sum);


    return 0;
}
