#include <stdio.h>
void ele(int a) {
   for (int i = 1; i <= 10; i++) {
       int res=a*i;
       printf("%d*%d=%d\n",a,i,res);
   }
}

int main() {
    int a;
    scanf("%d",&a);
    ele(a);
    return 0;
}