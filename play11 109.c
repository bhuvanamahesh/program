#include <stdio.h>

int main()
{
    int n,a[1000],i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+a[j];	
		}
		printf("%d ",sum);
	}
	
    return 0;
}
