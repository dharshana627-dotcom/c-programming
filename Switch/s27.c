#include<stdio.h>
int main(){
    int mode;
    scanf("%d",&mode);
    switch(mode){
        case 1:
            printf("Delivery Charge $ 40");
            break;
        case 2:
            printf("Delivery Charge $ 120");
            break;
        case 3:
            printf("Delivery Charge $ 0");
            break;
    }
    return 0;
}