#include<stdio.h>
int main()
{
     int a,r,p=1,s;
    scanf("%d",&a);
    while(a)
    {
        r=a%2;
        s=s+r*p;
        p=p*10;
        a=a/2;
    }
    printf("%d",s);
    return 0;
}
