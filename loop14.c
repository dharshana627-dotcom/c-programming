//14.Count Even Digits

#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d",&n);
    for(int i = n;i > 0;i/=10){
        int j = i % 10;
        if(j % 2 == 0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}