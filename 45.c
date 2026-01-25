//45.use logical OR on two values

#include <stdio.h>
int logicalOr(int a,int b){
	return (a || b);
}

int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int result=logicalOr(a,b);
	printf("%d",result);
	return 0;
}