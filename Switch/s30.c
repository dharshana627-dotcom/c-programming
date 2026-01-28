#include<stdio.h>
int  main(){
    int hours;
    scanf("%d",&hours);
    switch((hours <= 1) ? 1 : (hours<=4) ? 2 : 3){
        case 1:
            printf("Short interruption");
            break;
        case 2:
            printf("Medium interruption");
            break;
        case 3:
            printf("Long interruption");
            break;
    }
    return 0;
}