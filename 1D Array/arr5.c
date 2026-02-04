#include <stdio.h>
int main() {
    int size;
    int sum=0,expected;
    scanf("%d", &size);
    int arr[size-1];
    for (int i = 0; i < size-1; i++) {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    expected=size*(size+1)/2;
    int result=expected-sum;
    printf("%d\n",result);
    return 0;

}