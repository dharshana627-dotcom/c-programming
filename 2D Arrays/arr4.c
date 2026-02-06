#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int temp[r * c];
    int index = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            temp[index++] = arr[i][j];
        }
    }
    for (int i = 0; i < index; i++) {
        for (int j = i + 1; j < index; j++) {
            if (temp[i] == temp[j]) {
                printf("%d\n", temp[i]);
                return 0;
            }
        }
    }
    return 0;
}