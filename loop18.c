//18.Find the GCD of two numbers.

#include <stdio.h>

int main() {
    int a,b,gcd,min;
    scanf("%d %d",&a,&b);
    min = (a < b) ? a: b;
    for(gcd = min;gcd >= 1;gcd--){
        if(a % gcd == 0 && b % gcd == 0){
            break;
        }
    }
    printf("%d\n",gcd);
    return 0;
}