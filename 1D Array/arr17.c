#include <stdio.h>

int main() {
    int size,a= 1;
    scanf("%d", &size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size/2;i++) {
        if (arr[i] != arr[size-i-1]) {
            a=0;
            break;
        }
    }
    if (a)
        printf("Yes");
    else
        printf("No");
    return 0;
}