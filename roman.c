#include <stdio.h>

int main()
{
  char a[100];
	int i,len,j,c=0;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		switch(a[i])
		{
			case 'V':a[i]=5;
			break;
			case 'I':a[i]=1;
			break;
			case 'X': a[i]=10;
			break;
		}
	
	}
	c=a[strlen(a)-1];
	for(j=strlen(a)-1;j>0;j--)
	{
		if(a[j]>a[j-1])
		{
			c=c-a[j-1];
		}
		else
		{
			c=c+a[j-1];
		}
	}
	printf("%d",c);
     return 0;
}
