//17. Number Within Range

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 10 && num <= 20){
        printf("Number is within range");
    }else{
        printf("Number is out of range");
    }
    return 0;
}
