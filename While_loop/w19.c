#include <stdio.h>
int main() {
    int num,n;
    scanf("%d %d", &num,&n);
    int i = 1;
    int temp;
    int treated = 0,rejected = 0;
    while (i<=n) {
        scanf("%d", &temp);
        if (treated < num) {
            if (treated + temp <= num) {
                treated += temp;
            } else {
                rejected+=(treated+temp)-num;
                treated = num;
            }
        } else {
            rejected += temp;
        }
        i++;
    }

    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);

    return 0;
}

