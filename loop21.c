

#include<stdio.h>
#include<math.h>
int main(){
    int n,ld,prod,sum,count;
    prod=1;
    sum=0;
    count=0;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        ld=n%10;
        prod=(ld*pow(2,count));
        count++;
        sum=sum+prod;
    }
    printf("%d",sum);
    return 0;
}