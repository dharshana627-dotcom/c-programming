#include <stdio.h>
void ele(int r) {
    float n,res;
    n=3.14;
    res=n*r*r;
    printf("%.2f\n",res);
}

int main() {
    int r;
    scanf("%d",&r);
    ele(r);
    return 0;
}