#include<stdio.h>
int main(){
    int category,fee;
    scanf("%d",&category);
    switch (category)
    {
    case 1:
        fee=1200;
        printf("Exam Fee ?%d",fee);
        break;
    case 2:
        fee=800;
        printf("Exam Fee ?%d",fee);
        break;
    case 3:
        fee=500;
        printf("Exam Fee ?%d",fee);
        break;
    }
    return 0;
}