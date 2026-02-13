#include <stdio.h>
int main(){
    char s1[100],s2[100];
    fgets(s1,100,stdin);
    char *p=s1,*q=s2;
    while(*p!='\0') {
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("%s\n",s2);
    return 0;
}