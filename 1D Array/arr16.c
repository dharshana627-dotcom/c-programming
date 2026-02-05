#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    if (size < 2) {
        printf("0");
        return 0;
    }
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int maxDiff = arr[1] - arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] - min > maxDiff) {
            maxDiff = arr[i] - min;
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("%d", maxDiff);
    return 0;
}