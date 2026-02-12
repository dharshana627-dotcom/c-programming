#include <stdio.h>
void ele(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum);
}

int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}