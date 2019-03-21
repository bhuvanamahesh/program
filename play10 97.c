#include <stdio.h>

int main()
{
    int i,n,l,c=0;
    scanf("%d%d",&l,&n);
    for(i=l;i<=n;i++)
    {
        if(i%2!=0)
        {
            c=c+i;
        }
    }
    printf("%d",c);

    return 0;
}
