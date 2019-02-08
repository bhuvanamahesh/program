#include <stdio.h>
int main()
{
	int n,b[n],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&b);
	    sum=sum+b;
	}
	printf("%d",sum);
	return 0;
}
