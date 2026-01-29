#include<stdio.h>
int main(){
    int type,litres,bill;
    scanf("%d %d",&type,&litres);
    switch (type)
    {
    case 1:
    bill=105*litres;
        printf("Fuel Cost $%d",bill);
        break;
    case 2:
    bill=92*litres;
        printf("Fuel Cost $%d",bill);
        break;
    case 3:
    bill=85*litres;
        printf("Fuel Cost $%d",bill);
        break;
    }
    return 0;
}