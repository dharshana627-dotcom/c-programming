#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    char *p=str;
    fgets(str,sizeof(str),stdin);
    int count=0;
    for (;*p!='\0';p++) {
        if ((*p!=' '&& *p!='\n')&&(p==str||*(p-1)==' ')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}