#include<stdio.h>
int main(){
    int n,hours,count=0;
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        scanf("%d",&hours);
        if(hours==0){
            count++;
        }
        i++;
    }
    printf("Inactive Status: %d\n",count);
    if(count>2){
          printf("Risk Status: High");  
        }
    else{
        printf("Risk Status: Low");
    }
    return 0;
}