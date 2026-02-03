#include <stdio.h>
int main() {
    int n,num;
    scanf("%d", &n);
    int i = 1;
    int Count = 0;
    int fail = -1;
    while (i <= n) {
        scanf("%d", &num);
        if (num>70) {
            Count++;
        }
        if (num>80 && fail == -1) {
            fail = i;
        }
        i++;
    }
    if (fail == -1) {
        printf("Breakdown At Reading: Not Occurred\n");
    } else {
        printf("Breakdown At Reading: %d\n", fail);
    }
    printf("Unsafe Readings: %d\n", Count);
    return 0;
}
