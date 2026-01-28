#include<stdio.h>
int main(){
    int type,units,amnt;
    scanf("%d %d",&type,&units);
    switch(type){
        case 1:
            if(units <= 30){
                amnt = units*5;
                printf("?%d",amnt);
            }
            else if(units > 30){
                amnt = (30*5)+((units-30)*8);
                printf("?%d",amnt);
            }
            break;
        case 2:
            amnt = 10*units;
            printf("?%d",amnt);
            break;
    }
    return 0;
}