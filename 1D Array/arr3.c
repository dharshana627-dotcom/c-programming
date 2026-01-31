#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    if(size < 2) {
        printf("Yes");
        return 0;
    }
    int diff = arr[1] - arr[0];

    for(int i=2;i<size;i++) {
        if(arr[i]-arr[i-1]!=diff) {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}