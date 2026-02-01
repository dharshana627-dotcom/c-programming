#include<stdio.h>
int main(){
    int n,init,balance,deposit=0,withdraw=0,result,count=0;
    scanf("%d %d",&n,&init);
    int i=1;
    while(i<=n){
        scanf("%d",&balance);
        if(balance<0){
            deposit=deposit-balance;
        }
        else{
            withdraw=withdraw+balance;
        }
        result=(deposit-withdraw);
        if(balance>0 && balance<2000){
            count++;
        }
        i++;
    }
    int total=init-result;
    printf("Final Balance: %d\n",total);
    printf("Low Balance Days: %d",count);
    return 0;
}