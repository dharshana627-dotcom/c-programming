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
    int max = 0,max2=0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j]>max) {
                max2=max;
                max=arr[i][j];
                if (arr[i][j]>max && arr[i][j]!=max) {
                    max2=arr[i][j];
                }
            }
        }
    }
    int min=arr[0][0],min2=arr[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j]<0) {
                if (arr[i][j]>min) {
                    min2=min;
                    min=arr[i][j];
                    if (arr[i][j]<min2 && arr[i][j]!=min) {
                        min2=arr[i][j];
                    }
                }
            }
        }
    }
    int pro1=max*max2;
    int pro2=min*min2;
    int res=pro1 > pro2 ? pro1 : pro2;
    printf("%d\n",res);
    return 0;
}