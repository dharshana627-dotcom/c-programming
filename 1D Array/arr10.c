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
    int max = arr[size-1];
    arr[size-1] =-1;
    for(int i=size-2;i>= 0;i--)
    {
        int temp = arr[i];
        arr[i] = max;
        if(temp > max)
        {
            max = temp;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}