#include<stdio.h>
int main(){
    int category,distance;
    scanf("%d %d",&category,&distance);
    switch ((category))
    {
    case 1:
        if(distance <= 30){
            printf("Eligible");
        }
        else if(distance >= 30){
            printf("Eligible with Extra Fee");
        }
        break;
    case 2:
        if(distance <= 30){
            printf("Eligible");
        }
        else if(distance >= 30){
            printf("Not Eligible");
        }
        break;
    
    default:
        printf("Eligible");
    }
    return 0;
}