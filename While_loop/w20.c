#include <stdio.h>

int main() {
    int n,num,temp;
    scanf("%d", &n);
    int total=0,count= 0;
    int crashDay=-1;
    scanf("%d", &num);
    int day=2;
    while (day<=n) {
        scanf("%d", &temp);
        if (temp<num) {
            total++;
            count++;
            if (count==3 && crashDay==-1) {
                crashDay=day;
            }
        } else {
            count=0;
        }
        num=temp;
        day++;
    }
    if (crashDay == -1) {
        printf("Crash Day: Not Detected\n");
    } else {
        printf("Crash Day: %d\n", crashDay);
    }
    printf("Total Drops: %d\n", total);

    return 0;
}