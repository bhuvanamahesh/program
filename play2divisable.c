#include <stdio.h>

int main()
{
     int n,k,len,i;
    scanf("%d%d",&n,&k);
    if(n>k)
    {
        len=n;
    }
        else
        {
            len=k;
        }
        for(i=2;i<=len;i++)
        {
            if((i%n==0)&&(i%k==0))
            {
                printf("%d",i);
                break;
            }
        }

    return 0;
}
