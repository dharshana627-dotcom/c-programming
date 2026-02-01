#include<stdio.h>
int main(){
    int n,d,sum=0,count=0;
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        scanf("%d",&d);
        sum=sum+d;
        if(d>2){
            count++;
        }
        i++;
    }
    printf("Total Delay: %d\n",sum);
    printf("Delayed Days: %d",count);
    return 0;
    
}