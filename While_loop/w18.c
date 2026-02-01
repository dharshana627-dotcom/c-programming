#include<stdio.h>
int main(){
    int a,n,h,count=0,sum,temp;
    scanf("%d %d",&a,&n);
    temp=n;
    while(n>0){
        scanf("%d",&h);
        if(h>a){
            count++;
        }
        n--;
    }
    sum=temp-count;
    printf("Safe Hours: %d\n",sum);
    printf("Failure Count: %d",count);
    return 0;
}