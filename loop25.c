#include<stdio.h>
#include<math.h>
int main(){
    int n,ld,sum,temp;
    double result;
    sum=0;
    scanf("%d",&n);
    temp=n;
    for(;n!=0;n/=10){
        ld=n%10;
        result=pow(ld,3);
        sum=sum+result;
    }
    if(sum==temp){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}