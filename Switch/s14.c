#include<stdio.h>
int main(){
    int category,age;
    scanf("%d %d",&category,&age);
    if(age >= 0 && age <= 20){
    switch (category)
    {
    case 1:
        if(age <= 5){
            printf("$1500");
        }
        else if(age > 5){
            printf("$2500");
        }
        break;
    case 2:
        if(age <= 5){
            printf("$4000");
        }
        else if(age > 5){
            printf("$6000");
        }
    default:
        printf("$4000");
    }
    }
    return 0;
}