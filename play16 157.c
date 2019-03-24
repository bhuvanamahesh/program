#include <stdio.h>
int main()
{
    int a,b,c,i=0,rem,a1[100],j,sum=0;
    scanf("%d %d",&a,&b);
    c=a*b;
    while(c)
    {
        rem=c%2;
        c=c/2;
        a1[i]=r;
        i++;
    }
    for(j=0;j<i;j++)
    {
        sum++;
        if(a1[j]==1)
        {
            printf("%ld",sum);
            break;
        }
    }
    return 0;
}
