/*1      1
  12    21
  123  321
  12344321 */


#include <stdio.h>

int main() {
    for (int i = 1;i <= 4;i++) {
        for (int j = 1;j < i+1;j++) {
            printf("%d",j);
        }
        for (int j = 1;j <= 2*(4-i);j++) {
            printf(" ");
        }
        for (int j = i;j >= 1;j--) {
            printf("%d",j);
        }
        printf("\n");
        }

    return 0;
}