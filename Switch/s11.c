#include<stdio.h>
int main(){
    int planType;float dataUsed;
    scanf("%d %.f",&planType,&dataUsed);
    switch(planType){
        case 1:
            if(dataUsed <= 1){
                printf("Normal Speed");
            }
            else if(dataUsed > 1){
                printf("Speed Reduced");
            }
            break;
        case 2:
            if(dataUsed <= 2){
                printf("Normal Speed");
            }
            else if(dataUsed > 2){
                printf("Extra Charges Applied");
            }
            break;
    }
    return 0;
}