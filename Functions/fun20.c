#include <stdio.h>
void ele(int a,int b,char n) {
    scanf("%c",&n);
    switch (n) {
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        case '%':
            printf("%d\n",a%b);
            break;
        default:
            printf("Invalid choice\n");
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    char n;
    scanf("%c",&n);
    ele(a,b,n);
    return 0;
}