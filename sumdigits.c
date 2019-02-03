#include <stdio.h>

int main()
{
    int sum=0,r,n;
    scanf("%d",&num);
    while(num!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
