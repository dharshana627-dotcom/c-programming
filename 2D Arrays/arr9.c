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
    int count = 0;
    for (int i = 0; i < r; i++) {
        int even = 0, odd = 0;
        for (int j = 0; j < c; j++) {
            if (arr[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even == odd) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}