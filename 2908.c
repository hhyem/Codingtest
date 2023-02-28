#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    char str1[6], str2[6];
    sprintf(str1, "%d", a);
    sprintf(str2, "%d", b);

   char tmp;
   tmp = str1[0];
   str1[0] = str1[2];
   str1[2]= tmp;

   tmp = str2[0];
   str2[0] = str2[2];
   str2[2]= tmp;

   a = atoi(str1);
   b = atoi(str2);

   if(a < b)
        printf("%d\n", b);
    else
        printf("%d\n", a);

    return 0;
}
