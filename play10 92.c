#include<stdio.h>
int main()
{
     int a,r,p=1,s;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        s=s+r*p;
        p=p*2;
        a=a/10;
    }
    printf("%d",s);
    return 0;
}
