#include<stdio.h>
int main(){
    int category;
    scanf("%d",&category);
    switch(category){
        case 1:
            printf("Under Warranty");
            break;
        case 2:
            printf("Limited Warranty");
            break;
        case 3:
            printf("Out of Warranty");
            break;
    }
    return 0;
}