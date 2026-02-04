#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max1,max2,min1,min2;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2) {
            max2 = arr[i];
        }
        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2) {
            min2 = arr[i];
        }
    }
    int max = max1 * max2;
    int min = min1 * min2;
    int product = (max > min) ? max : min;
    printf("%d", product);
    return 0;
}