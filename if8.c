//8. Multiple of 3 and 7

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0){
        printf("Multiple of both 3 and 7");
    }else{
        printf("Not a multiple of both");
    }
    return 0;
}