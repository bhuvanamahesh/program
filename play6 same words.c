#include <stdio.h>

int main()
{
     char a[200],b[200];
    int i,flag,n,n1;
    scanf("%s %s",a,b);
    n=strlen(a);
    n1=strlen(b);
    if(n==n1)
    {
    for(i=0;i<n;i++)
      {
          if(a[i]==b[i])
          {
              flag=0;
          }
          
          else
          {
              flag=1;
          }
      }
    
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
    else
    {
        printf("no");
    }


    return 0;
}
