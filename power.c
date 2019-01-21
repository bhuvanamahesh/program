#include <stdio.h>

int main()
{
    int p,n,r=1;
    scanf("%d%d",&n,&p);
    while(p)
    {
        p=p*n;
        p--;
    }
    printf("%d",r);

    return 0;
}
