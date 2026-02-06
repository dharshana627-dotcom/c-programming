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
    int maxUni= 0;
    int deptIndex = 0;
    for (int i = 0; i < r; i++) {
        int uniCount = 0;
        for (int j = 0; j < c; j++) {
            int uni = 1;
            for (int k = 0; k < j; k++) {
                if (arr[i][j] == arr[i][k]) {
                    uni = 0;
                    break;
                }
            }
            if (uni) {
                uniCount++;
            }
        }
        if (uniCount > maxUni) {
            maxUni = uniCount;
            deptIndex = i;
        }
    }
    printf("%d\n", deptIndex);
    return 0;
}
