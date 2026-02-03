#include <stdio.h>

int main() {
    int capacity,n;
    scanf("%d %d",&capacity,&n);
    int sum=0;
    int count=0;
    int i = 0;
    while (i<n) {
        int num;
        scanf("%d", &num);
        sum=sum+num;
        if (sum<0) {
           sum=0;
        }
        if (sum>(0.8*capacity)) {
            count++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n", sum);
    printf("Critical Hours: %d\n", count);

    return 0;
}
