#include<stdio.h>
void main()
{
  char a[200];
	scanf("%[^\n]s",a);
	int i,f;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			f=1;
		}
		else
		{
			f=0;
			break;
		}
	}
	if(f==0)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	
	return 0;
}
