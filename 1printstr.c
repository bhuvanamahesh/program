#include <stdio.h>

int main()
{
    char a[30],b[40];
    int i,j,flag=0;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
        }
    }
            if(flag==0)
            {
                puts(a);
            }
            else
            {
                puts(b);
            }
    

    return 0;
}
