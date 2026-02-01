#include<stdio.h>
int main(){
    int a,n,amnt,sum=0,count=0,rem;
    scanf("%d %d",&a,&n);
    while (n>0)
    {
        scanf("%d",&amnt);
        sum=sum+amnt;
        if(sum<=a){
            count++;
            rem=a-sum;
        }
        n--;
    }
    printf("Successful Purchase: %d\n",count);
    printf("Final Balance: %d",rem);
    return 0;
}