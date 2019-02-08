#include <stdio.h>

int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\t%d\n",a,b);
        c=a-b;
        printf("%d",c);
    }

    return 0;
}
