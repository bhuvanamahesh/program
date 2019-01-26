#include <stdio.h>

int main()
{
    int n,a,b,i,temp,sum=0;
    scanf("%d%d%d",&n,&a,&b);
    for(0;i<n;i++)
    {
        temp=sum+a;
        sum=temp;
        a=a+b;
    }
    printf("%d",temp);

    return 0;
}
