#include <stdio.h>
void ele(int n) {
    int rev=0,t;
    t=n;
    while(n>0) {
        int dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
        if(t==rev) {
            printf("Palindrome\n");
        }else {
            printf("Not Palindrome\n");
        }
}

int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}