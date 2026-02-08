#include<stdio.h>
int main(){
    int r,c;
    scanf("%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0,ele=0,ele1=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ele1=arr[i][j];
            int count=0;
            for(int x=0;x<r;x++){
                for(int y=0;y<c;y++){
                    if(arr[x][y]==ele1){
                        count++;
                    }
                }
            }
            if(count>max){
                max=count;
                ele=ele1;
            }
        }
    }
    printf("%d",ele);
    return 0;
}