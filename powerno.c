#include <stdio.h>

int main()
{
    int n,p,s=1;
    scanf("%d%d",&n,&s);
    while(p)
    {
        s=s*n;
        p--;
    }
    printf("%d",s);

    return 0;
}
