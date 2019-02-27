#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0,c1=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        {
            c=c+1;
        }
        else if(a[i]==')')
        {
            c1=c1+1;
        }
    }
    if(c==c1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
