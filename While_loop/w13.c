#include <stdio.h>

int main() {
    int data,n,used;
    scanf("%d %d", &data,&n);
    int i=1;
    int total=0,overused=0;
    int exhaustedDay = -1;
    while (i<=n) {
        scanf("%d", &used);
        if (exhaustedDay == -1) {
            total+=used;
            if (total>=data) {
                exhaustedDay = i;
                overused = total-data;
            }
        }
        i++;
    }
    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }

    return 0;
}
