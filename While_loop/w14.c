#include<stdio.h>
int main(){
    int a,n,w,sum=0,rem,count=0;
    scanf("%d",&a);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&w);
        sum=sum+w;
        if(sum<=a){
            count++;
            rem=a-sum;
        }
        i++;
    }
    printf("Successful Withdrawals: %d\n",count);
    printf("Remaining Cash: %d",rem);
    return 0;
}