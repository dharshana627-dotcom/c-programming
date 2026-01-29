#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
            printf("Upgrade Fee $300");
            break;
        case 2:
            printf("Upgrade Fee $800");
            break;
        case 3:
            printf("Upgrade Fee $1500");
            break;
    }
    return 0;
}