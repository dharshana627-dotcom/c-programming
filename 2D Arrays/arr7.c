#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    int min=arr[0][0],max=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min<arr[i][j+i] && max>arr[i+j][j]){
                count++;
                printf("%d ",count);
                return 0;
            }
        }
    }
    printf("%d",count);
    return 0;
}