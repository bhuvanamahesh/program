#include<stdio.h>
int main()
{
    int a,b,flag=1,gcd,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        flag=flag*i;
    }
    a=flag;
    flag=1;
    for(i=1;i<=b;i++)
    {
        flag=flag*i;
    }
    b=flag;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}
