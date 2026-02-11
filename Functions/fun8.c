#include <stdio.h>
void ele(int n) {
    int rev=0;
    while(n>0) {
        int dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    printf("%d\n",rev);
    }
int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}