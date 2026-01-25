//53.Use /= and %= operator

#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int b=a;
	int c=a;
	scanf("%d",&a);
	b/=a;
	c%=a;
	printf("%d %d",b,c);
	return 0;
}