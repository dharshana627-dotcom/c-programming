#include<stdio.h>
int main(){
    int charge,weight,final;
    scanf("%d %d",&charge,&weight);
    switch (charge)
    {
    case 1:
        final = weight*300;
        printf("$ %d",final);
        break;
    case 2:
        final = (weight-3)*300;
        printf("$ %d",final);
        break;
    default:
        printf("$4000");
    }

    return 0;
}