//17.Check whether a number is a strong number.


#include <stdio.h>

int main() {
    int n,a,fact,digit;
    int sum = 0;
    scanf("%d",&n);
    a = n;
    for(;n > 0;n /= 10){
        digit = n % 10;
        fact = 1;
        for(int i = 1;i <= digit;i++){
            fact *= i;
        }
        sum += fact;
    }
    if(sum == a){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}