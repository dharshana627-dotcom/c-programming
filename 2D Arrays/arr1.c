#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int max2=arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j]>max) {
                max2=max;
                max=arr[i][j];
            }else if (arr[i][j]>max2 && arr[i][j]!=max) {
                max2=arr[i][j];
            }
        }
    }
    printf("%d\n",max2);
    return 0;
}