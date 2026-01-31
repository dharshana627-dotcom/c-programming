#include<stdio.h>
int main(){
    int m,n,ele,count=0,sum=0;
    scanf("%d %d",&m,&n);
    int i=1;
    while(i<=n){
        scanf("%d",&ele);
        sum=sum+ele;
        if(sum<=m){
            count++;
        }
        i++;
    }
    printf("Passengers Allowed: %d\n",count);
    if(sum>m){
        printf("Overload: Yes");
    }
    else{
        printf("Overload: No");
    }
    return 0;
}