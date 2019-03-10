#include<stdio.h>
int main()
{
    int a[100],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=0;i<n-1;i++)
    {
        c=(c)^(a[i+1]);
        }
        printf("%d",c);
    return 0;
}
