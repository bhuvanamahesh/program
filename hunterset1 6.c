#include <stdio.h>

int main()
{
    int a[1000],b[1000],i,j,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b[0]=a[i];
                c++;
            }
        }
    }
    if(c>0)
    {
        printf("%d",b[0]);
    }
    else
    {
        printf("Unique");
    }

    return 0;
}
