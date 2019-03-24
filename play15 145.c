#include<stdio.h>
int main()
{
    int n,t,c=1,c1=1,i,j,ans;
    scanf("%d%d",&n,&t);
    for(i=1;i<=n;i++)
    {
        c=c*i;
    }
    for(j=1;j<=y;j++)
    {
        c1=c1*j;
    }
    ans=c/c1;
    printf("%d",ans);
    return 0;
}
