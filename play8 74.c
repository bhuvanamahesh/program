#include <stdio.h>

int main()
{
     int a,c,n=1;
    scanf("%d %d",&a,&c);
    while(c)
    {
        n=n*a;
        c--;
    }
    printf("%d",n);
    return 0;
}
