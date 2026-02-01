#include<stdio.h>
int main(){
    int n,hours;
    int sum=0,count=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&hours);
        sum=sum+hours;
        if(hours>4){
            count++;
        }
        i++;
    }
    printf("Total Overtime: %d\n",sum);
    printf("Burnout Days: %d",count);
    return 0;
}