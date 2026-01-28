#include<stdio.h>
int main(){
    int pType,p1,p2,pay;
    int pMode;
    p1=199;
    p2=399;
    scanf("%d %d",&pType,&pMode);
    switch(pType){
        case 1:
            if(pMode == 11 || pMode == 12){
                pay = p1-20;
                printf("Pay $ %d",pay);
            }
            else if(pMode == 13){
                printf("Pay $ %d",p1);
            }
            break;
        case 2:
            if (pMode == 11|| ptMode == 12){
                pay = p2-20;
                printf("Pay $ %d",pay);
            }
            else if(pMode == 13){
                printf("Pay $ %d",p2);
            }
            break;          
    }
    return 0;
}