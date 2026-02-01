#include<stdio.h>
int main(){
    int max,n,a,sum=0,count;
    scanf("%d %d",&max,&n);
    while(n>0){
        scanf("%d",&a);
        sum=sum+a;
        if(sum<=max){
            count++;
        }
        n--;
    }
    printf("People Entered: %d\n",count);
    if(sum>max){
        printf("Overload Status: Yes");
    }
    else{
        printf("Overload Status: No");
    }
    return 0;
}