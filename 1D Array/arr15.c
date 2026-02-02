#include<stdio.h>
int main(){
    int size,j=0,temp;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++) {
        if (arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}