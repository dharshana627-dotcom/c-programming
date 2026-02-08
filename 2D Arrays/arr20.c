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
    int same=0,np=0,ele=0,count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ele=arr[i][j];
            for(int x=0;x<r;x++){
                for(int y=0;y<c;y++){
                    if(arr[x][y]==ele){
                        count++;
                    }
                }
            }
            if(count==1){
                np=ele;
                same=1;
            }
        }
        if(same){
            break;
        }
    }
    if(same==1){
        printf("%d",np);
    }
    return 0;
}