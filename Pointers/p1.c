#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap: %d %d\n", *a, *b);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap: %d %d\n",a,b);
    swap(&a,&b);
    return 0;
}