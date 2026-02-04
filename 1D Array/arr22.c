#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size-1; i++) {
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}