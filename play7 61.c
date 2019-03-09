#include <stdio.h>

int main() 
{
	int n,c,a[n],i,j,sum,flag=0;;
	scanf("%d %d",&n,&c); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]+a[j];
			if(sum==c)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
