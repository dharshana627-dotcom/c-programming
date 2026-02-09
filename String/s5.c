#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, pal=1;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            pal = 0;
            break;
        }
    }
    if (pal)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
