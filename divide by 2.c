#include <stdio.h>

int main() 
{
	int n,i;
	scanf("%d",&n);
	int num,rem;
	while(n!=1)
	{
	rem=n%2;
	num=n/2;
	printf("%d\n",num);
	n=rem;
	break;
	}
	return 0;
}
