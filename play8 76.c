#include <stdio.h>

int main()
{
     int a[100],i,n,l=0,c=0,k,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            l++;
            k=a[i];
        }
        else
        {
            c++;
            s=a[i];
        }
    }
    if(l==1)
    {
        printf("%d",k);
    }
    else
    printf("%d",s);
 
    return 0;
}
