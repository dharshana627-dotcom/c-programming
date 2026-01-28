#include<stdio.h>
int main(){
    int class,age;
    float fare,discount;
    scanf("%d %d",&class,&age);
    switch(class){
        case 1:
            fare=300;
            if(age<12){
                discount=fare-(fare/2);
                printf("Fare ?%.2f",discount);
            }
            else if(age>=60){
                discount=fare-(fare*(0.33));
                printf("Fare ?%.2f",discount);
            }
            break;
        case 2:
            fare=1000;
            if(age<12){
                discount=fare-(fare/2);
                printf("Fare ?%.2f",discount);
            }
            else if(age>=60){
                discount=fare-(fare*(0.33));
                printf("Fare ?%.2f",discount);
            }
            break;
        default:
            printf("Sleeper(1)\nAC(2)");
    }
    return 0;
}