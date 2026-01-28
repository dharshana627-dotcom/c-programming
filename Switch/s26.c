#include<stdio.h>
int main(){
    int delay,fine;
    scanf("%d",&delay);
    switch (delay)
    {
    case 1:
        if(delay <= 5){
            fine = 50*delay;
            printf("%d",fine);
        }
        break;
    case 2:
        if(delay <= 10){
            fine = 100*delay;
            printf("%d",fine);
        }
        break;
    case 3:
        if(delay > 10){
            fine = 200*delay;
            printf("%d",fine);
        }
        break;
    }
    return 0;
}