#include<stdio.h>
int main(){
    int marks,grade;
    scanf("%d",&marks);
    grade=marks/10;
    if(marks>=0 && marks<=100){
        switch(grade){
            case 9:
                printf("Grade A");
                break;
            case 8:
                printf("Grade B");
                break;
            case 7:
                printf("Grade C");
                break;
            case 6:
                printf("Grade D");
                break;
            case 5:
                printf("Grade E");
                break;
            case 4:
                printf("Grade F");
                break;
            case 3:
                printf("Grade Supplementary");
                break;
            default:
                printf("Grade Fail");
        }
    }
    return 0;
}