#include<stdio.h>
int main(){
    int vType,hours,amnt;
    scanf("%d %d",&vType,&hours);
    switch (vType)
    {
    case 1:
        amnt=10*hours;
        printf("$ %d",amnt);
        break;
    case 2:
        amnt=20*hours;
        printf("$ %d",amnt);
        break;
    
    default:
        printf("$20");
    }
    return 0;
}