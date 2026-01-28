#include<stdio.h>
int main(){
    int loanType,creditScore;
    scanf("%d %d",&loanType,&creditScore);
    if(creditScore >= 300 && creditScore <= 900){
    switch (loanType)
    {
    case 1:
        if(creditScore >= 700){
            printf("Approved");
        }
        else if(creditScore >= 650 && creditScore < 700){
            printf("Manual Review");
        }
        break;
    case 2:
        if(creditScore >= 700){
            printf("Approved");
        }
        else if(creditScore < 700){
            printf("Rejected");
        }
        break;
    }
    }
    return 0;
}