#include <stdio.h>

int main()
{
     int n,a[10],i,j,c=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b=((a[i])&(a[j]));
            if(b>c)
            {
                c=b;
            }
        }
    }
printf("%d",c);

    return 0;
}
