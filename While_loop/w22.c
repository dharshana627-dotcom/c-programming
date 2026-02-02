#include <stdio.h>

int main() {
    int n,num;
    scanf("%d",&n);
    int i=1,failed = 0,streak = 0,lockAt = 0;
    while (i <= n) {
        scanf("%d", &num);

        if (num==0) {
            failed++;
            streak++;
        } else {
            streak = 0;
        }
        if (streak == 3 && lockAt == 0) {
            lockAt = i;
        }
        i++;
    }
    if (lockAt == 0) {
        printf("Lock Triggered At Attempt: Not Locked\n");
    } else {
        printf("Lock Triggered At Attempt: %d\n", lockAt);
    }
    printf("Total Failed Attempts: %d\n", failed);
    return 0;
}