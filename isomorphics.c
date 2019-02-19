#include <stdio.h>

int main()
{
    char a[50],b[50];
	int i,j,k=1,m,n,c1,c2;
	scanf("%s %s",a,b);
	c1=strlen(a);
	c2=strlen(b);
	if(c1==c2)
	{
	for(i=0;i<c1;i++)
	{
		for(j=i+1;j<c2;j++)
		{
			m=a[i]-a[j];
			n=b[i]-b[j];
			if(m==n)
			{
			    k=0;
			}
			else
			{
				k=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(k==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

     return 0;
}
