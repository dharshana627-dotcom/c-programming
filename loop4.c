//4.Multiplication Table

#include <stdio.h>

int main() {
    int n;
    int mul = 0;
    scanf("%d",&n);
    for (int i = 0;i < 10;i++) {
        mul = mul + n;
        printf("%d ",mul);
    }
    return 0;
}