#include<stdio.h>
int main(){
    int type,balance,withdraw;
    scanf("%d %d %d",&type,&balance,&withdraw);
    switch(type){
        case 1:
            if(balance>=withdraw){
                printf("Transaction Successful");
            }
            else if(withdraw>balance){
                printf("Limit Exceded");
            }
            break;
        case 2:
            if(withdraw>0 && withdraw<=5000){
                printf("Transaction Successfull");
            }
            else if(withdraw>5000){
                printf("Limit Exceeded");
            }
            break;
    }
    return 0;

}