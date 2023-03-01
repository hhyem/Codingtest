#include <stdio.h>
int main() {
    int N, cnt = 1;
    scanf("%d", &N);
    int h[50] = {0,}, w[50] = {0,};

    for(int i=0; i<N; i++) {
        scanf("%d %d", &h[i], &w[i]);
    }

    for(int i=0; i<N; i++) {
        cnt = 1;
        for(int j=0; j<N; j++) {
            if(h[i] < h[j]) {
                if(w[i] < w[j]) 
                    cnt += 1;
            }
        }
        printf("%d ", cnt);
    }
    return 0;
}
