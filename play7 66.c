#include <stdio.h>

int main() 
{
	int n,k,a[n],i,j,c=1;;
	scanf("%d %d",&n,&k);
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
		}
		if(c==k)
		{
			printf("%d",a[i]);
			break;
			
		}
	}
	return 0;
}
