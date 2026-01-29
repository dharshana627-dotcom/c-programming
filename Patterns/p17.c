/*   A
    ABA
   ABCBA
  ABCDCBA */

#include<stdio.h>
int main(){
    int n,s;
    scanf("%d",&n);
    char ch='A';
    for(int i=0;i<=n;i++){
        
        for(s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",ch+j);
        }
        for(int j=i-2;j>=0;j--){
            printf("%c",ch+j);
        }
        printf("\n");
        
    }
    return 0;
}