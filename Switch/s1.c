#include<stdio.h>
int main(){
    int input,units,r1,r2,r3,r4,r5,bill;
    r1=3;r2=5;r3=7;
    r4=7;r5=10;
    scanf("%d %d",&input,&units);
    switch(input){
    case 1:
        if(units>=0 && units<=100){
            bill=r1*units;
            printf("%d",bill);
        }
        else if(units>100 && units<=200){
            bill=bill=((r1*100)+(units-100)*r2)-80;
            printf("%d",bill);
        }
        else if(units>200 && units<=1000){
            bill=((r1*100)+(units-200)*r2+(units-100)*r3)-80;
            printf("%d",bill);
        }
        break;
    case 2:
        if(units>=0 && units<=100){
            bill=r4*units;
            printf("%d",bill);
        }
        else if(units>100){
            bill=((r4*100)+(units-100)*r5);
            printf("%d",bill);
        }
        break;
    default:
        printf("1-Domestic\n2-Commercial");

    }
    return 0;
}