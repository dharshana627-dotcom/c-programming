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
    int avg=0,avg1=0,sum=0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum+=arr[i][j];
            avg=sum/c;
            avg1=avg/r;
        }
    }
    int index=1;
    if (arr[r][c]==avg1) {
        index++;
    }
    printf("%d\n",index);
    return 0;
}