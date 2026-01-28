#include<stdio.h>
int main(){
    int type,distance,fee;
    scanf("%d %d",&type,&distance);
    switch(type){
        case 1:
            fee=10*distance;
            printf("Fare $ %d",fee);
            break;
        case 2:
            fee=15*distance;
            printf("Fare $ %d",fee);
            break;
        case 3:
            fee=20*distance;
            printf("Fare $ %d",fee);
            break;
    }
    return 0;

}