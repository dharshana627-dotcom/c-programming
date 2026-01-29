#include<stdio.h>
int main(){
    int n,ld,rev,temp;
    rev=0;
    scanf("%d",&n);
    temp=n;
    for(;n!=0;n/=10){
        ld=n%10;
        rev=rev*10+ld;
    }
    if(rev==temp){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}