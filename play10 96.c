#include <stdio.h>

int main()
{
    long int n,t,c=1;
    int s,r,a,b;
    scanf("%ld",&n);
    t=n;
    while(t>0)
    {
        t=t/10;
        c=c*10;
    }
    c=c/10;
        a=n/c;
        b=n%10;
        s=a+b;
    printf("%d",s);
    return 0;
}
