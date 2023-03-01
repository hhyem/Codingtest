#include <stdio.h>

int main() {    

    int a[6] = {1,1,2,2,2,8};
    int n[6]={0,};

    for(int i=0; i<6; i++) {
        scanf("%d", &n[i]);
    }

    for(int i=0; i<6; i++) {
        n[i] = a[i]-n[i];
        printf("%d ", n[i]);
    }

    return 0;
}
