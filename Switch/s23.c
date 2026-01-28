#include<stdio.h>
int main(){
    int type,discount,bill;
    scanf("%d %d",&type,&bill);
    switch (type){
        case 1:
            discount = bill-(bill*(0.05));
            printf("Pay ? %d",discount);
            break;
        case 2:
            discount = bill-(bill*(0.15));
            printf("Pay ? %d",discount);
            break;
    }
    return 0;
}