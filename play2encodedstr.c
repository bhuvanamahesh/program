#include <stdio.h>

int main()
{
     char a[100];
    int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]=='X')
	    {
	        a[i]='A';
	    }
	    else if(a[i]=='Y')
	    {
	        a[i]='B';
	    }
	    else if(a[i]=='Z')
	    {
	        a[i]='C';
	    }
	    else
	    {
	         a[i]=a[i]+3;  
	    }
	}
	printf("%s",a);  
    return 0;
}
