#include<stdio.h>
int main(){
    int n,a,max=0,count=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&a);
        if(max<a){
            max=a;
        }
        if(a>5){
            count++;
        }
        i++;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",count);
    return 0;
}