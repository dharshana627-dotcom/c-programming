#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d", &r,&c);
    int arr[r][c];
    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxsum = 0;
    int column=0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
         int sum = 0;
            for (int k = 0; k < r; k++) {
                sum += arr[k][j];
            }
            if (sum > maxsum) {
                maxsum = sum;
                column = j;
            }
        }
    }
    printf("%d",column);
    return 0;
}