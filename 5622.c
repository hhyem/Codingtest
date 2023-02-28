#include <stdio.h>

int sum(int n);
int main() {

    char str[15];
    scanf("%s", str);
    int time = 0;
    char new_str[15];
    for(int i=0; i<strlen(str); i++) {
        new_str[i] = str[i];
        time += 1 + sum(new_str[i]);
    }
    printf("%d\n",time);
    
}

int sum(int n) {
    switch(n) {
        case 'A' :
		case 'B' :
		case 'C' :
			return 2;
		case 'D' :
		case 'E' :
		case 'F' :
			return 3;
		case 'G' :
		case 'H' :
		case 'I' :
			return 4;
		case 'J' :
		case 'K' :
		case 'L' :
			return 5;
		case 'M' :
		case 'N' :
		case 'O' :
			return 6;
		case 'P' :
		case 'Q' :
		case 'R' :
		case 'S' :
			return 7;
		case 'T' :
		case 'U' :
		case 'V' :
			return 8;
		case 'W' :
		case 'X' :
		case 'Y' :
		case 'Z' :
			return 9;
   }

}
