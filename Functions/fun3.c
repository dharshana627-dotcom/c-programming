#include <stdio.h>
void ele(int n) {
        if (n%2==0) {
            printf("Even\n");
        }
        else {
            printf("Odd\n");
        }
    }
int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}