#include <stdio.h>

int main()
{
     char a[100];
    int i,l;
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            continue;
        }
        else
        {
            printf("%c",a[i]);
        }
    }

    return 0;
}
