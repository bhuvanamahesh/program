#include <stdio.h>
int main()
{
    char a[100];
    int i,n,c=0,c1=0,s;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a')
    
        {
            c++;
        }
        else if(a[i]=='b')
        {
            c1++;
        }
        else
         break;
    }
    s=c+c1;
    if(s==n)
    {
        printf("yes");
    }
else
printf("no");
    return 0;
}
