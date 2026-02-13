#include <stdio.h>
int main(){
    char s1[20];
    char s2[20];
    scanf("%s %s",s1,s2);
    char *p=s1;
    char *q=s2;
    while(*p!='\0') {
        p++;
    }
    while(*q!='\0') {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("%s\n",s1);
    return 0;
}