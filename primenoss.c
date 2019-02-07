
#include <stdio.h>

int main()
{
    int a,i,count=0,n;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	{
	if(a%i==0)
	count++;
	}
	if(count==2)
	printf("prime number");
	else
	printf("not prime number");


    return 0;
}
