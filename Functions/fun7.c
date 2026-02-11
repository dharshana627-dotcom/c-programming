#include <stdio.h>
void ele(int n) {
    int prime=1;
    for(int i=0;i<n;i++) {
        if (n%2!=0 || n==2) {
            prime=1;
        }else {
            prime=0;
        }
    }
    if (prime==1) {
        printf("%d is a prime number\n",n);
    }else {
        printf("%d is not a prime number\n",n);
    }
    }
int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}