#include<stdio.h>
int main(){
    int mode;
    char student;
    scanf("%d %c",&mode,&student);
    switch (mode)
    {
    case 1:
        if(student == 'R'){
            printf("$5000");
        }
        else if(student == 'S'){
            printf("$5000");
        }
        break;
    case 2:
        if(student == 'R'){
            printf("$9000");
        }
        else if(student == 'S'){
            printf("$7000");
        }
        break;
    default:
        printf("$3000");   
    }
    return 0;
}