#include <stdio.h>

int main() {
    int n,a;
    scanf("%d",&n);
    int suc=0;
    int can=0;
    int i=1;
    while (i<=n) {
        scanf("%d",&a);
        if ((a == 1) || (a == 0)) {
            if (a == 1) {
                suc++;
            }
            else {
                can++;
            }
        }else {
            printf("Enter 1 or 0");
        }
        i++;
    }
    printf("Successful: %d\n",suc);
    printf("Cancelled: %d\n",can);
    if (suc>=can) {
        printf("Status: Safe\n");
    }
    else {
        printf("Status: Risk\n");
    }

    return 0;
}