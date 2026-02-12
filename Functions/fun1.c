#include <stdio.h>
void ele(int p,int r,int t) {
    float n;
    n=(p*r*t)/100;
    printf("%.2f\n",n);
}

int main() {
    int p,r,t;
    scanf("%d %d %d",&p,&r,&t);
    ele(p,r,t);
    return 0;
}