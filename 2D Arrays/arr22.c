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
    for (int i = 0; i < r; i++) {
        int ele = 1;
        for (int j = 0; j < c; j++) {
            for (int k = j + 1; k < c; k++) {
                if (arr[i][j] == arr[i][k]) {
                    ele = 0;
                    break;
                }
            }
            if (!ele)
                break;
        }
        if (ele)
            count++;
    }
    printf("%d", count);
    return 0;
}