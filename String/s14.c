#include <stdio.h>
#include <string.h>
int main() {
    char s1[20],s2[20];
    scanf("%s",s1);
    int i=0;
    while(s1[i]!='\0') {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("%s\n",s2);
    return 0;
}