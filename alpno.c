#include <stdio.h>
#include <string.h>

int main()
{
    char a[200];
	int n,i,count=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
		{
			count=1;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			count=2;
		}
		else
		{
			count=0;
		}

	}
	if(count==1 && count==2)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}


    
    return 0;
}
