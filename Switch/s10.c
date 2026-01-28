#include<stdio.h>
int main(){
    int code,exp;
    scanf("%d %d",&code,&exp);
    switch (code)
    {
    case 1:
        if(exp >= 3){
            int bonus=50000+(5000*exp);
            printf("Salary $%d",bonus);
        }
        else{
            printf("Salary $50000");
        }
        break;
    case 2:
        if(exp >= 3){
            int bonus=35000+(5000*exp);
            printf("Salary $%d",bonus);
        }
        else{
            printf("Salary $35000");}
        break;
    }
    return 0;
}