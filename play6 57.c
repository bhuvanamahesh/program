#include <stdio.h>

int main(void) 
{
	char a[20],n;
	int i,c=0;
	scanf("%s %c",a,&n);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==n)
		{
			c=c+1;
			
		}
	}
	printf("%d",c);
	return 0;
}
