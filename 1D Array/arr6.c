#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        int dupli = 0;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                dupli = 1;
                break;
            }
        }
        if(dupli == 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
