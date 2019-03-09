#include <stdio.h>

int main() 
{
	int n,a[n],i,j,temp=0,c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{

	for(j=i+1;j<n;j++)
	{
		
		if(a[i]==a[j])
		{
			c=c+1;
		}
		if(a[i]!=a[j])
		{
			break;
		}
	}
		if(c>temp)
		{
			temp=c;
		}
	}
	printf("%d",temp);
	return 0;
}
