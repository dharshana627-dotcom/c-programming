//18. Electricity Bill (Using If-Else)

#include <stdio.h>

int main() {
    int units;
    float bill;
    scanf("%d", &units);

    if(units <= 50){
        bill = units * 3;
    }else if (units <= 100){
        bill = (50 * 3) + (units - 50) * 4;
    }else{
        bill = (50 * 3) + (50 * 4) + (units - 100) * 5;
    }
    printf("Bill amount = Rs. %.0f", bill);
    
    return 0;
}