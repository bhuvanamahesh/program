#include <stdio.h>

int main()
{
    int n,n1,rem,sum,c=0,p=1;
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        rem=n1%2;
        sum=sum+rem*p;
        n1/=2;
        c++;
        p=p*10;
    }
    if(n==0)
    {
    printf("1");
    }
    else
    {
    printf("%d",c);
    }
	return 0;
}
