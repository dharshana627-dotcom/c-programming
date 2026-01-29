#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
            printf("Certifcate Fee $0");
            break;
        case 2:
            printf("Certificate Fee $500");
            break;
    }
    return 0;
}