#include <stdio.h>
void ele(int n) {
    int count = 0;
    while (n>0) {
        int digit = n % 10;
        count++;
        n = n/10;
    }
    printf("%d\n", count);
}

int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}