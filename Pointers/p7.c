#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str2[100];
    scanf("%s",str);
    char *p=str,*q=str2;
    int len=strlen(str);
    int pal=0;
    for(int i=0;i<len;i++){
        if(len>=0){
            str2[i]=str[len-1];
        }
        len--;
    }
    if((*p>='a' && *p<='z') && (*q>='a' && *q<='z')){
        for(int i=0;i<len;i++){
            if(*(p+i)!=*(q+i)){
                pal=0;
                break;
            }else{
            pal=1;
            }
        }
    }
    if(pal==1){
        printf("Yes");}
    else{
        printf("No");
    }
    return 0;
}