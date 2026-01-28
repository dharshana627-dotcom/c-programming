//9.Count Digits

#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d",&n);
    for (;n != 0;) {
        int rem = n % 10;
        count = count + 1;
        n = n / 10;
    }
    printf("%d",count);
    return 0;
}