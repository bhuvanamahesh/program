#include <stdio.h>

int main()
{
    char a[100],i,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
