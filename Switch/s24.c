#include<stdio.h>
int main(){
    int mins,type,bill;
    scanf("%d %d",&type,&mins);
    switch (type)
    {
    case 1:
        bill=mins;
        printf("Call Charge ? %d",bill);
        break;
    case 2:
        bill=3*mins;
        printf("Call Charge ? %d",bill);
        break;
    case 3:
        bill=10*mins;
        printf("Call Charge ? %d",bill);
    
    default:
        break;
    }
    return 0;
}