#include <stdio.h>

int main() 
{
	float p,r,res;
	int c,n;
	scanf("%f %d %f",&p,&n,&r);
	res=((p*n*r)/100);
	c=floor(res);
	printf("\n%d",c);
	return 0;
}
