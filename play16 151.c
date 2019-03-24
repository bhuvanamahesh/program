#include <stdio.h>
int main()
{
    char a[100];
    int i,l,s=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((a[i]=='a'||a[i]=='b'))
        {
            s++;
        }
}
if((s==l)||(s==l-1))
{
    printf("yes");
}

else
printf("no");
return 0;
}
