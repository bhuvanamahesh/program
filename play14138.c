#include<stdio.h>
int main()
{
	int n,i,c=1,f=0;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		c=c*2;
		if(c==n)
		{
			f=1;
			break;
		}
	}
	if((f==1)||(n==1))
	{
		printf("yes");
	}
	else if(f==0)
	{
		printf("no");
	}
   
   return 0;
}
