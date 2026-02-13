#include <stdio.h>
long long power(int b, int expo) {
    long long res = 1;
    for(int i = 0; i < expo; i++) {
        res *= b;
    }
    return res;
}
int main() {
    int b,expo;
    scanf("%d %d", &b, &expo);
    long long res = power(b, expo);
    printf("%lld\n", res);
    return 0;
}