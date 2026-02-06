#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int sum[r];
    for (int i = 0; i < r; i++) {
        sum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            sum[i] += arr[i][j];
        }
    }
    int maxDiff = 0;
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            int diff;
            if (sum[i] > sum[j]) {
                diff = sum[i] - sum[j];
            }else {
                diff = sum[j] - sum[i];
            }
            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }
    }
    printf("%d\n", maxDiff);
    return 0;
}