#include <stdio.h>
void main()
{
    int a[10],k,i=0,m,n,s,max=0;
    scanf("%d %d",&n,&p);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=0;
    while(j<m)
    {
        scanf("%d",&k);
        a[n]=k;
        n++;
       for(i=0;i<n;i++)
        {
            if(a[i]>=max)
            {
                max=a[i];
            }
        }
        printf("%d ",max);
    j++;
    }
    return 0;
    
}
