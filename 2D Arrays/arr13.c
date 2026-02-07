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
            for (int k = j + 2; k < c; k++) {
                if (arr[i][j]==arr[i][k]) {
                    ele = 1;
                    count++;
                }
                else if (arr[i][k]==arr[k][j]) {
                    ele = 1;
                    count++;
                }else {
                    ele = 0;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}