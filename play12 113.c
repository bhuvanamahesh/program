#include <stdio.h>

int main()
{
    char a[100],n,c;
	scanf("%s",a);
	c=strlen(a);
	if(a[0]<'4'&&a[1]<'10'&&a[2]=='/'&&a[3]<'2'&&a[4]<'3'&&a[5]=='/'&&a[6]<'10'&&a[7]<'10'&&a[8]<'10'&&a[9]<'10'&&a[10]=='\0')
	{
		n=1;
	}
	else
	{
		n=0;
		
	}
	if(n==0)
	{
		printf("no");
	}
	if(n==1)
	{
		printf("yes");
	}
	
    return 0;
}
