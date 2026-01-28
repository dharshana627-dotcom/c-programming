#include<stdio.h>
int main(){
    int vType,trips,car,truck;
    scanf("%d %d",&vType,&trips);
    switch(vType){
        case 1:
            if(trips > 1 && trips <= 10){
                car = 800;
                printf("$%d",car);
            }
            else if(trips == 1){
            car = 100*trips;
            printf("$%d",car);
            }
            break;
        case 2:
            truck = 240*trips;
            printf("$%d",truck);
            break;
    }
    return 0;
}