#include<stdio.h>
int main()
{
    int i,m,n,c=0,s,k;
    scanf("%d%d",&s,&k);
    for(i=0;i<n;i++)
    {
       scanf("%d%d",&s,&k); 
    }
    for(i=0;i<n;i++)
    {
        if(k==m)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("yes";)
    }
    else
    printf("no");
    return 0;
}
