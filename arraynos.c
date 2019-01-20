#include <stdio.h>

int main()
{
    int a[i],n,b,i,sum=0;
    clrscr();
    scanf("%d%d",&n,&b);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}
