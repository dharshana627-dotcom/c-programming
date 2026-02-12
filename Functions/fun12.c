#include <stdio.h>
void ele(int n) {
    int leap=1;
    for (int i = 0; i < n; i++) {
        if ((n%4==0 && n%100!=0)||(n%400==0)) {
           leap=1;
        }else {
            leap=0;
        }
    }
    if (leap==1) {
        printf("Leap Year");
    }else {
        printf("Not Leap Year");
    }
}

int main() {
    int n;
    scanf("%d",&n);
    ele(n);
    return 0;
}