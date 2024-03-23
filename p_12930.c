#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int size = strlen(s);
    char* answer = calloc(size, sizeof(char));
    
    for(int i=0; i<size; i++) { 
        if(i % 2 == 0)
            answer[i] = s[i] - 32;
        else
            answer[i] = s[i];
    }
    
    return answer;
}

int main() {
    char str;
    scanf("%s", &str);
    
    solution(str);
}
