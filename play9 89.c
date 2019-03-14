#include <stdio.h>

int main()
{
    long int i,n,k,fact=1,sum=1,c;
    scanf("%ld%ld",&n,&k);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    for(i=1;i<=n-k;i++)
    {
        sum=sum*i;
    }
    c=fact/sum;
    printf("%ld",c);
    return 0;
}
