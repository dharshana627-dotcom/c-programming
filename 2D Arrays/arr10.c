#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = 1,index = 0;
    for (int j = 0; j < c; j++) {
        max *= arr[0][j];
    }
    for (int i = 1; i < r; i++) {
        int pro = 1;
        for (int j = 0; j < c; j++) {
            pro *= arr[i][j];
        }
        if (pro > max) {
            max = pro;
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}