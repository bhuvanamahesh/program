#include <stdio.h>

int main()
{
     int c,n;
    scanf("%d",&n);
    
    c=n+1;
    while(c!=0)
    {
        if(c%10==0)
        {
            printf("%d",c);
            break;
        }
        c++;
    }


    return 0;
}
