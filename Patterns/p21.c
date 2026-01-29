/* 4 4 4 4 4 4 4 
   4 3 3 3 3 3 4 
   4 3 2 2 2 3 4 
   4 3 2 1 2 3 4 
   4 3 2 2 2 3 4 
   4 3 3 3 3 3 4 
   4 4 4 4 4 4 4 */

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n); 
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int a,b,c,d;
            a=i;
            b=j;
            c=size-1-i;
            d=size-1-j;
            int m = i;
            if (b < m) {m = b;}
            if (c < m) {m = c;}
            if (d < m) {m = d;}
            printf("%d ", n - m);
        }
        printf("\n");
    }
    return 0;
}