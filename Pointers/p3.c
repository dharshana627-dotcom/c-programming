#include <stdio.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    char *p = str;
    int count=0;
    while(*p!='\0') {
        if ((*p>='a' && *p<='z')||(*p>='A' && *p<='Z')) {
            if (*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U') {
                count++;
            }
        }
        p++;
    }
    printf("%d\n",count);
    return 0;
}