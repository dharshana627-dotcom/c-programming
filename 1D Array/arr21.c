#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }
    int result = -1;
    for(int i=0;i<size;i++) {
        for(int j=i;j<size;j++) {
            if(arr[i] == arr[j]) {
                result = arr[i];
            }
        }
    }
    printf("%d\n", result);
    return 0;
}