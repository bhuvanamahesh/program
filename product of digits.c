#include <stdio.h>
int main(void) 
{
	int n,rem,pro=1;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		pro=pro*rem;
		n=n/10;
	}
	printf("\n%d",pro);
	return 0;
}
