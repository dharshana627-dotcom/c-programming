#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
            printf("Hostel Fee $80,000");
            break;
        case 2:
            printf("Hostel Fee $60,000");
            break;
        case 3:
            printf("Hostel Fee $45,000");
            break;
    }
    return 0;
}