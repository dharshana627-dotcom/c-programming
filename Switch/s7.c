#include<stdio.h>
int main(){
    int accountType,years;
    scanf("%d %d",&accountType,&years);
    switch(accountType){
        case 1:
            printf("Interest 4%%");
            break;
        case 2:
            if(years > 3){
                printf("Interest 7%%");
            }
            else if(years <= 3){
                printf("Interest 5%%");
            }
            break;
    }
    return 0;
}