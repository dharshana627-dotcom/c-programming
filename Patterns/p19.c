/* *********
   **** ****
   ***   ***
   **     **
   *       *
   *       *
   **     **
   ***   ***
   **** ****
   *********  */

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = n;i >= 0;i--) {
        for (int j = -n;j <= n;j++) {
            if (-(n-i)<j && j<(n-i)) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    for (int i = 0;i <= n;i++) {
        for (int j = -n;j <= n;j++) {
            if (-(n-i)<j && j<(n-i)) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}