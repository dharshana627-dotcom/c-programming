//14.Divisible by 11

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n % 11 == 0){
        printf("Divisible by 11");
    }else{
        printf("Not Divisible by 11");
    }
    return 0;
}