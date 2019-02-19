#include <stdio.h>

int main()
{
    char a[100];
    int i,t,n;
	scanf("%s",a);
	n=strlen(a);
	if(n%2==0)
	{
		for(i=0;i<n;i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
		printf("%s",a);
	}
	else
	{
		for(i=0;i<n-1;i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
		printf("%s",a);
	}
     return 0;
}
