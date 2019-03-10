#include <stdio.h>

int main()
{
    int a[10],i,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=a[i]-a[i+1];
        break;
    }
    printf("%d",k);    
    return 0;
}
