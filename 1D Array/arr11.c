#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int total=0;
    for(int i=0;i<size;i++) {
        total+=arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++) {
        total-=arr[i];
        if (sum==total) {
            printf("%d\n",i);
            return 0;
        }
        sum=sum+arr[i];
    }
    printf("-1");
    return 0;
}