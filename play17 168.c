#include<stdio.h>
int main()
{
	char a[100];
	int l,c,i,j,n;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='1'&&a[i]<='9')
        {
        	c=a[i]-48;
        	for(j=0;j<c;j++)
        	printf("%c",a[i-1]);
        }
     }
}
