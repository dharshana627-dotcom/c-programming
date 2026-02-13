#include <math.h>
#include <stdio.h>
int arm(int n) {
    int temp,rem,dig=0,sum=0;
    temp=n;
    while (temp!=0) {
        temp/=10;
        dig++;
    }
    temp=n;
    while (temp!=0) {
        rem=temp%10;
        sum+=round(pow(rem,dig));
        temp/=10;
    }
    if (sum==n) {
        printf("Armstrong");
    }else {
        printf("Not Armstrong");
    }
    return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    arm(n);
    return 0;
}