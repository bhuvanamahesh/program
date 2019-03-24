
#include<stdio.h>
int main()
{
    char a[100],i,j,c;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            i++;
        }
    }
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
    if(c==1)
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }
   return 0;
}
