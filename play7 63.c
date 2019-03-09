#include <stdio.h>

int main(void) 
{
	int n,i,j,a[1000],b[1000];;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	printf("\n");
	for(j=0;j<n;j++)
	{
		scanf("%d ",&b[j]);
	}
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
				{
					printf("%d ",a[i]);
				}
			}
	}
	return 0;
}
