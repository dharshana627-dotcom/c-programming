#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ele;
    scanf("%d",&ele);
    int *p=arr;
    int index=1;
    for(int i=1;i<=n;i++){
        if(*(p++)==ele){
            index=i;
            break;
        }
        else{
            index=-1;
        }
    }
    if(index>0){
        printf("%d",index);
    }
    else{
        printf("%d",index);
    }
    return 0;
}