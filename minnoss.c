#include <stdio.h>

int main()
{
    char a[100];
	int n,i,c=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]==' ')
	    {   
	        c++;
	    }
	    else
	    {
	        continue;
	    }
	}
    printf("%d",c+1);
return 0;
}
