#include<stdio.h>
int main(){
    int oAmnt,sType,d_amnt;
    scanf("%d %d",&oAmnt,&sType);
    switch(sType){
        case 1:
            d_amnt=50;
            printf("Delivery $%d",d_amnt);
            break;
        case 2:
            if(oAmnt<1000){
                d_amnt=100;
                printf("Delivery $%d",d_amnt);
            }
            if(oAmnt>=1000){
                printf("Delivery Free");
            }
    }
    return 0;
}