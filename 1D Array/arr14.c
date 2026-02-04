#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int min=-1;
    for (int i = 0; i < size; i++) {
        if (arr[i]>0) {
            if (min==-1||min>arr[i]) {
                min=arr[i];
            }
        }
    }
    if (min==-1) {
        printf("No positive");
    }else {
        printf("%d\n",min);
    }
    return 0;

}