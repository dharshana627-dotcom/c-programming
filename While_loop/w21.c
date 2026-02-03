#include <stdio.h>
int main(){
    int n,num;
    scanf("%d",&n);
    int i=0;
    int count=0,max=0,high=0;
    while(i<n){
        scanf("%d",&num);
        if(num>20){
            count++;
            high++;
            if(max<count){
                max=count;
            }
        }
        else{
            count=0;
        }
        i++;
    }
    printf("Congstion Minutes: %d\n",high);
    printf("Longest Congestion Streak: %d",max);
    return 0;
}