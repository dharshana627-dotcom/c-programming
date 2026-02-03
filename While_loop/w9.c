#include <stdio.h>
int main(){
    int fuel,n,num,rem;
    scanf("%d %d",&fuel,&n);
    int i=1;
    int sum=0,count=0;
    while(i<=n){
        scanf("%d",&num);
        sum=sum+num;
        if(sum<=fuel){
            rem=fuel-sum;
            count++;
        }
        i++;
    }
    printf("Completed Trips: %d\n",count);
    printf("Remaining Fuel: %d",rem);
    return 0;
}