//19.Find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a,b,max,lcm;
    scanf("%d %d",&a,&b);
    max = (a > b) ? a: b;
    lcm = max;
    for(;;){
        if(lcm % a == 0 && lcm % b == 0){
            break;
        }
        lcm += max;
    }
    printf("%d\n",lcm);
    return 0;
}