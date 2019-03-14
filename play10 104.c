#include <stdio.h>

int main()
{
    
    long int n,sum,i,c=0,a[1000];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
    scanf("%ld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sum=a[i]+a[i+1];
        c=c+sum;
    }
    printf("%ld",c);

    return 0;
}
