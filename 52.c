//52.Use *= operator

#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int temp=a;
	scanf("%d",&a);
	temp*=a;
	printf("%d",temp);
	return 0;
}