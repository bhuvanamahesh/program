#include <stdio.h>

int main()
{
     int a[100],c=0,n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                c=c+1;
            }
        }
    }
    printf("%d",c);
    return 0;
}
