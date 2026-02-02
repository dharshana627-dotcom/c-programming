#include <stdio.h>

int main() {
    int n,num;
    scanf("%d",&n);
    int i=1,count=0,high=0,fraudAt=0;
    while (i <= n) {
        scanf("%d", &num);
        if (num>=50000) {
            count++;
            high++;
        } else {
            high = 0;
        }
        if (high == 3 && fraudAt == 0) {
            fraudAt = i;
        }
        i++;
    }
    if (fraudAt == 0) {
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    } else {
        printf("Fraud Triggered At Attempt: %d\n", fraudAt);
    }
    printf("High-Value Transactions: %d\n",count);
    return 0;
}