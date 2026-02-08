#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int maxSum= a[0][0] + a[0][1] + a[1][0] + a[1][1];
    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < c - 1; j++) {
            int sum = 0;
            for (int x = i; x < i + 2; x++) {
                for (int y = j; y < j + 2; y++) {
                    sum += a[x][y];
                }
            }
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    printf("%d", maxSum);
    return 0;
}