#include <stdio.h>
int main()
{
    int k,i;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        if(k%i==0)
        {
            if(i%2!=0)
            {
                printf("%d ",i);
            }
        }
    }

    return 0;
}
