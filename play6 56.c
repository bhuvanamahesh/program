#include <stdio.h>

int main(void) 
{
	char a[20],c;
	int i;
	scanf("%s %c",a,&c);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==c)
		{
			printf("%d",i+1);
			break;
		}
	}
	return 0;
}
