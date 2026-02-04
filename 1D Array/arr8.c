#include <stdio.h>
int main() {
    int size, k;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    k = k % size;
    int temp[size];
    int count = 0;
    for(int i = k; i < size; i++) {
        temp[count++] = arr[i];
    }
    for(int i = 0; i < k; i++) {
        temp[count++] = arr[i];
    }
    for(int i = 0; i < size; i++) {
        printf("%d ", temp[i]);
    }
    return 0;
}