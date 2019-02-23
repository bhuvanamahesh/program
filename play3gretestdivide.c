#include <stdio.h>

int main(void) 
{
	int n,c,i,len;
	scanf("%d %d",&n,&k);
	if(n>c)
	{
		len=n;
	}
	else
	{
		len=c;
	}
	for(i=len;i>=2;i--)
	{
		if(n%i==0 && c%i==0)
		{
			printf("%d",i);		
		}
	}

	return 0;
}
