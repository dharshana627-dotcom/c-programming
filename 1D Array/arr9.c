#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size],arr1[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max=0;
    int count=0;
    for(int i = size-1; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            if (max==arr[i]) {
                arr1[count++]=max;
            }
        }
    }
    for(int i = count-1; i >= 0; i--) {
        printf("%d ", arr1[i]);
    }

    return 0;
}