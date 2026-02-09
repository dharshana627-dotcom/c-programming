#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int upper=0;
    for(int i=0;str[i]!='\0';i++) {
        if (str[i]>='A'&&str[i]<='Z'){
            upper=1;
        }
    }
    if (upper==1) {
        printf("Valid");
    }else {
        printf("Invalid");
    }
    return 0;
}