#include <stdio.h>

int main()
{
    long int n,hex=0,rem,t=1;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        hex=hex+rem*t;
        t=t*2;
        n=n/10;
    }
    printf("%lo",oct);
    
    return 0;
}
