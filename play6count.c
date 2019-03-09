#include<stdio.h>
void main()
{
  char a[30];
	int i,c=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		c=c+1;
	}
	printf("%d",c);
