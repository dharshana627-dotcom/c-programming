//11.Sum of Digits


#include <stdio.h>

int main() {
    int n,sum = 0,rem;
    scanf("%d",&n);
    for (n;n>0;) {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}