#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int is_Prime=0;
    for(int i=2;i<=n;i++){
        if((n%i==0 && n%1==0)&&(n==2 || n==3 ||n==5 || n==7)){
            is_Prime++;
        }
        else if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0){
            is_Prime--;
        }
    }
    if(is_Prime==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;