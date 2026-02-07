#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum1=0,sum2=0;
    for (int i = 0; i < r; i++) {
        int sum=0;
        for (int j = 0; j < c; j++) {
            sum+=arr[i][j];
            if (arr[i][j]==arr[r-1][j-1]) {
                arr[i][j]=0;
            }
        }
        sum1+=sum;
        sum2=sum1-arr[1][1];
    }
    printf("%d", sum2);
    return 0;
}