//12.Power of a Number

#include <stdio.h>

int main() {
    int a,b;
    int result=1;
    scanf("%d %d",&a,&b);
    for (int i = 1;i <= b;i++) {
        result *= a;
    }
    printf("%d",result);
    // printf("%d",a);
    return 0;
}