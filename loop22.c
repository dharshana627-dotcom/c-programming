#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    count=0;
    for(int i=2;i<=n;i++){
        if(i==2 || i==3 ||i==5 ||i==7){
            count++;
        }
        if(i%i==0 && i%1==0 && i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}