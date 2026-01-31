#include<stdio.h>
int main(){
    int n,vio,count=0,sum=0,min=vio;
    scanf("%d",&n);
    int max1=0,max2=0;
    min=vio;
    while(n>0){
        scanf("%d",&vio);
        if(vio>70){
            sum++;
        }
        if(max1<vio && vio>70){
            max1=vio;
            count++;
            if(max2<count){
                max2=count;
            }}
        else{
            count=0;
            max1=0;
        }
        n--;
    }
    printf("Noise Violations: %d\n",sum);
    printf("Longest Violation Streak: %d",max2);
    return 0;
}