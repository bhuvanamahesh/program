#include <stdio.h>

int main(void) 
{
	char a[20],b[20];
	scanf("%s %s",a,b);
	int i,j;
	for(i=0;a[i]!='\0';i++)
	{
		
	}
		for(j=0;b[j]!='\0';j++,i++)
		{
			a[i]=b[j];
		}
	a[i]='\0';
	printf("%s",a);
	return 0;
}
