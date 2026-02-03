#include <stdio.h>
int main() {
    int fuel, n;
    scanf("%d %d", &fuel,&n);
    int i = 1;
    int num,total=0,wasted = 0;
    int emergency= -1;
    while (i <= n) {
        scanf("%d", &num);
        if (emergency == -1) {
            total+=num;
            if (total>fuel) {
                emergency = i;
                wasted = total-fuel;
            }
        }
        i++;
    }
    if (emergency==-1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0\n");
    } else {
        printf("Emergency Stage: %d\n", emergency);
        printf("Fuel Wasted: %d\n", wasted);
    }
    return 0;
}

