#include <stdio.h>
void ele(int n) {
    int sum=0;
    while(n>0) {
        int dig=n%10;
        sum+=dig;
        n=n/10;
    }
    printf("%d\n",sum);
    }
int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}