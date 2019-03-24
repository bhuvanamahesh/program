#include<stdio.h>
int main()
{
    int n,c=0,sum,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=rem*rem;
		c=c+sum;
		n=n/10;
	}
	printf("%d",c);
    return 0;
}
