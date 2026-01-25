//44.Use Logical AND on two values


#include <stdio.h>
int logicalAnd(int a,int b){
	return (a && b);
}

int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int result=logicalAnd(a,b);
	printf("%d",result);
	return 0;
}