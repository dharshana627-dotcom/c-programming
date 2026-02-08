include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a=0,index=0;
    for(int i=0;i<r;i++){
        for (int j=0;j<c-1;j++)
        {
            if((arr[i][j]%2==0 && arr[i][j+1]%2!=0)||(arr[i][j]%2!=0 && arr[i][j+1]%2==0)){
                a=1;
            }
            else{
                a=0;
            }
        }
        if(a==1){
            index=i;
            break;
        }
    }
    if(a==1){
        printf("%d",index);
    }
    return 0;
}