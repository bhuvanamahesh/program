#include <stdio.h>

int main() 
{
	int l,b,h;
	scanf("%d %d %d",&l,&b,&h);
	int volume,gd;
	volume=l*b*h;
	gd=2*((l*b)+(b*h)+(h*l));
	printf("\nVOLUME=%d",volume);
	printf("\nGD=%d",gd);
	return 0;
}
