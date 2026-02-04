#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max=0;
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
            count++;
        }
    }
    printf("%d\n", count);
    return 0;

}