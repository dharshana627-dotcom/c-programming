#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]=='@'&&str[i]!='\n') {
            str[i] = '\0';
        }
    }
    printf("%s", str);
    return 0;
}