//15. Valid Triangle (Using Angles)

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    d=a+b+c;
    if (d == 180){
        printf("Valid triangle");
    }else{
        printf("Invalid triangle");
    }
    return 0;
}