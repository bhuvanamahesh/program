#include <stdio.h>

int main()
{
    char a[50];
	int i,c;
	scanf("%[^\n]s",a);
	c=strlen(a);
	if(a[0]>91)
	{
		a[0]=a[0]-32;
	}
	for(i=0;i<c;i++)
		{
			if(a[i]==' ')
			{
				if(a[i+1]>91)
				{
					a[i+1]=a[i+1]-32;
				}
			}
		}
	printf("%s",a);
     return 0;
}
