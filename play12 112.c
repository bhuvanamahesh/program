#include <stdio.h>

int main()
{
    int n,sum=0,a[1000],i;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i>=1;i--)
	{
		sum=sum+i;
	}
	printf("%d",sum);
    return 0;
}
