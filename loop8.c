//8.Reverse a Number

#include <stdio.h>

int main() {
    int n;
    int rev = 0;
    int rem;
    scanf("%d",&n);
    for (;n != 0;) {
        rem=n%10;
        rev = rev*10 + rem;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}