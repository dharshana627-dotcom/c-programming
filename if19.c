//19. Digit Using ASCII

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9'){
        printf("Digit");
    }else{
        printf("Not a Digit");
    }
    return 0;
}