//25.Menu-Driven Program

#include <stdio.h>

int main() {
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);

    switch (n) {
        case 1: 
            printf("Sum = %d",a+b); 
            break;
        case 2: 
            printf("Sub = %d",a-b); 
            break;
        case 3: 
            printf("Mul = %d",a*b); 
            break;
        case 4: 
            printf("Div = %d",a/b); 
            break;
        case 5: 
            printf("Mol = %d",a%b); 
            break;
        default: 
            printf("Invalid");
    }
    return 0;
}