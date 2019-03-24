#include <stdio.h>
int main()
{
    char a[100],b[100],i,j,k,count=0;
    gets(a);
    gets(b);
    for(k=0;b[k]!='\0';k++)
    {
      for(i=0;a[i]!='\0';i++)
      {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                count++;
                b[j]='&';
            }
        }
      }
    }
    if(count==k)
    {
     printf("true");
    }
    else
    {
    printf("false");
    }
   return 0;
}
