//10.Fibonacci Series


#include <stdio.h>

int main() {
    int a,f=0,s=1,n;
    scanf("%d",&a);
    for (int i = 0;i < a;i++) {
        if (i <= 1) {
            n = i;
        }
        else {
            n = f + s;
            f = s;
            s = n;
        }
        printf("%d ",n);
    }
    return 0;
}