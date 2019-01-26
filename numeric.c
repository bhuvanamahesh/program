#include <stdio.h>

int main()
{
    char a;
    int b[100],i,f=0;
    for(i=0;i<=100;i++)
    {
        b[i]=i;
    }
    scanf("%s",&a);
    for(i=0;i<=100;i++)
    {
        if(a==b[i])
        f=1;
	
    }
    if(f==1)
      {
        printf("yes");
      }
        else
        {
        printf("no");
        }
    return 0;
}

