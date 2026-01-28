#include<stdio.h>
int main(){
    int attempt,marks;
    scanf("%d %d",&attempt,&marks);
    switch(attempt){
        case 1:
            if(marks >= 80){
                printf("Excellent");
            }
            break;
        case 2:
            if(marks >= 60){
                printf("Good");
            }
            break;
        case 3:
            printf("Needs improvement");
    }
    return 0;
}