#include <stdio.h>

int main()
{
     int a[100],i,n,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[0];
    for(i=0;i<n-1;i++)
    {
        k=(k)|(a[i+1]);
        }
        printf("%d",k);


    return 0;
}
