#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
            printf("Speed 40 Mbps");
            break;
        case 2:
            printf("Speed 100 Mbps");
            break;
        case 3:
            printf("Speed 300 Mbps");
            break;
    }
    return 0;
}