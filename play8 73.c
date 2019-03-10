#include <stdio.h>

int main()
{
    int i,n,a[1000],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]-a[i+1]==k)
        {
            printf("%d",a[i]);
            break;
        }
        
    }
    return 0;
}
