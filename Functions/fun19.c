#include <stdio.h>
long long power(int b, int expo) {
    if (expo==0){
        return 1;
    }
    long long res = power(b, expo/2);
    if (expo%2==0) {
        return res*res;
    }else {
        return res*b*res;
    }
}
int main() {
    int b,expo;
    scanf("%d %d", &b, &expo);
    long long res = power(b, expo);
    printf("%lld\n", res);
    return 0;
}