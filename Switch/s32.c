#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
            printf("Fine $1000");
            break;
        case 2:
            printf("Fine $1500");
            break;
        case 3:
            printf("Fine $2000");
            break;
    }
    return 0;
}