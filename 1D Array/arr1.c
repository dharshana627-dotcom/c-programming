#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int max2=-1;
    for(int j=1;j<size;j++) {
        if(max<arr[j]) {
            max2=max;
            max=arr[j];
        }
        else if (arr[j]>max2 && arr[j]!=max) {
            max2=arr[j];
        }
    }
    printf("%d\n",max2);
    return 0;
}