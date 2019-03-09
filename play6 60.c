#include <stdio.h>
int main() 
{
	char a[20],b[20];
	int i,j,flag=0;
	scanf("%s %s",a,b);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
		}
	}
		if(flag==1)
		{
			printf("yes");
		}
		if(flag==0)
		{
			printf("no");
		}

	return 0;
}
