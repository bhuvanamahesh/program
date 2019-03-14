#include <stdio.h>

int main()
{
    int n,a[1000],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
            if(a[i]<a[i+1])
            {
                c=c+a[i+1];
            }
            else
            {
                c=c+a[i];
            }
        
    }
    printf("%d",c);
    
    return 0;
}
