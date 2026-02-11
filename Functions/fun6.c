#include <stdio.h>
void ele(int n) {
    int fact=1;
    for (int i=1; i<=n; i++) {
        fact=fact*i;
    }
    printf("%d\n",fact);
    }
int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}