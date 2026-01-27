//20. Smallest Using Ternary Operator

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int smallest = (a < b) ? a : b;
    printf("%d is smallest", smallest);

    return 0;
}