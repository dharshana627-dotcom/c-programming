//10. Check 3-Digit Number

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 100 && num <= 999){
        printf("Three-digit number");
    }else{
        printf("Not a three-digit number");
    }
    return 0;
}