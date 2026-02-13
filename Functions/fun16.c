#include <stdio.h>
void fib(int n) {
    int n1=0,n2=1,temp;
    for(int i=0;i<n;i++) {
        printf("%d ",n1);
        temp=n1+n2;
        n1=n2;
        n2=temp;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    fib(n);
    return 0;
}