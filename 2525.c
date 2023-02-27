#include <stdio.h>

int main() {
    int hour, min;
    scanf("%d %d\n", &hour, &min);
    int new_min;
    scanf("%d", &new_min);
    min += new_min;

    hour += min/60;

    if (min >= 60) {
        min %= 60;
        if(hour > 23) {
           hour %= 24;
        } 
    }

    printf("%d %d\n", hour, min);

    return 0;
}
