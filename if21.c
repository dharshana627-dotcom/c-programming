//21. Simple Calculator (Switch)

#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %c %d", &a, &c, &b);

    switch (c) {
        case '+': 
            printf("Result = %d", a + b); 
            break;
        case '-': 
            printf("Result = %d", a - b); 
            break;
        case '*': 
            printf("Result = %d", a * b); 
            break;
        case '/': 
            printf("Result = %d", a / b); 
            break;
        default: 
            printf("Invalid operator");
    }
    return 0;
}