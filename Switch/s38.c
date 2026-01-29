#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
            printf("Consultation Fee $500");
            break;
        case 2:
            printf("Consultation Fee $1200");
            break;
    }
    return 0;
}