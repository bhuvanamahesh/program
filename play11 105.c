#include <stdio.h>

int main()
{
      int N,temp,j,i,a[N],b[N];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		b[i]=a[i];
	}
	
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			 temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d ",j+1);
			}
		}
	}
	
    return 0;
}
