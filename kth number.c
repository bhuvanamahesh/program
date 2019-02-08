#include <stdio.h>

int main() 
{
	int i,n,b,a[20];
	scanf("%d %d",&n,&b);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		while(i==b)
		{
			printf("\n%d",a[i]);
			break;
		}
	}
	return 0;
}
