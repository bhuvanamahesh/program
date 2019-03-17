#include<stdio.h>
int main()
{
    int a[100],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
        if(c%2==0)
        {
            printf("%d ",c);
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
        
     
