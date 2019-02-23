#include <stdio.h>

int main()
{
    char a[50],ch;
    int i,j,c=0,max=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
            c=c+1;
            }
            if(c>max)
            {
                max=c;
                ch=a[i];
            }
        }
    }
    printf("%c",ch);

    return 0;
}
