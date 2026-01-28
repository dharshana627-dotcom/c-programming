#include<stdio.h>
int main(){
    int seat,time,price;
    scanf("%d %d",&seat,&time);
    switch(seat){
        case 1:
            price = 150;
            if(time >= 18){
                printf("Ticket price ? %d",price+50);
            }
            else{
                
                printf("Ticket Price ? %d",price);
            }
            break;
        case 2:
            price = 250;
            if(time >= 18){
                printf("Ticket price ? %d",price+50);
            }
            else{
            printf("Ticket Price ? %d",price);
            }
            break;
            
    }
    return 0;
}