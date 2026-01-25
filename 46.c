//46.Apply Logical NOT on zero

#include <stdio.h>
int logicalNot(int a){
	return (!a);
}

int main(){
	int a;
	scanf("%d",&a);
	int result=logicalNot(a);
	if(a==0){
		printf("%d",result);}
	return 0;
}