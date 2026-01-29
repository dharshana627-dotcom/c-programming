#include<stdio.h>
int main(){
    int type,late;
    scanf("%d %d",&type,&late);
    switch (type)
    {
    case 1:
        printf("Late Fee $%d",2*late);
        break;
    case 2:
        printf("Late Fee $%d",5*late);
        break;
    }
    return 0;
}