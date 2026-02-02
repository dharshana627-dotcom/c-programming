#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int avg=0;
    for(int i=0;i<size;i++) {
        avg+=arr[i];
    }
    avg=avg/size;
    int count=0;
    for(int i=0;i<size;i++) {
        if (arr[i]>avg) {
           count++;
        }
    }
    printf("%d",count);
    return 0;
}