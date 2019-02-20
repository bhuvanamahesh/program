#include <stdio.h>

int main()
{
    char a[50],b[50];
	int i,j,n1,n2,c=0;
	scanf("%s %s",a,b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{
			if(a[i]==b[i])
			{
				c=c+0;
			}
			else
			{
				c=c+1;
			}
			
		}
		if(c==1)
		{
			printf("\nyes");
		}
		else
		{
			printf("\nno");
		}
	}
	else
	{
		printf("\nno");
	}

    return 0;
}
