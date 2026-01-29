/* ABCDE
   ABCD
   ABC
   AB
   A     */

#include <stdio.h>

int main() {
    for (char i = 'E';i >= 'A';i--) {
        for (char j = 'A';j <= i;j++) {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}