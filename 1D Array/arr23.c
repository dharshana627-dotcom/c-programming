#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        if (arr[i]==1 || arr[i]==-1) {
            arr[count] = arr[i];
        }
    }
    printf("%d\n",arr[count]);
    return 0;
}