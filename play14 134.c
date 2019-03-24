#include<stdio.h>
int main()
{
    int a[100],n,c,r,i,s;
    scanf("%d%d%d",&n,&l,&r);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[c-1];
    for(i=c;i<=r;i++)
    {
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    printf("%d",s);
    return 0;
}
