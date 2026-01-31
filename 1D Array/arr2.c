#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int count=0;
    for(int j=0;j<size;j++) {
        if (arr[j]==x) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}