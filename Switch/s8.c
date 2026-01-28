#include<stdio.h>
int main(){
    int marks,at;
    scanf("%d %d",&marks,&at);
    if(at >= 75){
        if(marks >= 75){
            printf("Distinction");
        }
        else if(marks >= 50 && marks < 75){
            printf("Pass");
        }
        else if(marks  < 50){
            printf("Fail");
        }
    }
    else{
        printf("Fail");
    }
    return 0;
}