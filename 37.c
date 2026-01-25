//37.Increment variable twice and print result

#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a=a++ + ++a;
	printf("%d",a);
	return 0;
}