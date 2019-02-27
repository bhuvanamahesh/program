#include <stdio.h>

int main()
{
    char a[100];
    int i,n;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i=i+3)
    {
        printf("%c",a[i]);
    }
    
    return 0;
}
