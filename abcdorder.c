#include <stdio.h>

int main() 
{
	char a[50],temp[50];
	int i,k,j;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				temp[k]=a[i];
				a[i]=a[j];
				a[j]=temp[k];
		}	}
	}
	printf("\n%s",a);
	return 0;
}
