/* E 
   D E 
   C D E 
   B C D E 
   A B C D E  */


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch='A'+n;
    for(int i=0;i<=n;i++){
        for(int j=i;j>0;j--){
            printf("%c ",ch-j);
        }
        printf("\n");
    }
    return 0;
}