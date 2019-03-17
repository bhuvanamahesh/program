#include <stdio.h>

int main()
{
    char a[1000];
	scanf("%s",a);
	int i,j,l,n,sum=0;
	l=strlen(a);
	j=l-1;
	for(i=0;a[i]!='\0';i++)
	{
        if(a[i]>='A'&&a[i]<='F')
		 n=(a[i]-65)+10;
	
		else if(a[i]>='0'&&a[i]<='9')
			n=a[i]-48;
		sum=sum+(n*(pow(16,j)));
		j--;
	}
	printf("%d",sum);

	return 0;
}
