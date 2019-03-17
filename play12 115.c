#include <stdio.h>

int main()
{
    char a[1000],b[1000];
    int n,m,i,j;
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++);
    m=i;
    for(i=0;b[i]!='\0';i++);
    n=i;
    if(m==n)
    printf("%s%s",a,b);
    else
    {
        if(n<m)
        {
            for(i=0;i<n;i++)
            printf("%c",a[i]);
            for(i=0;i<n;i++)
            printf("%c",b[i]);
        }
        if(m<n)
        {
            for(i=0;i<m;i++)
            printf("%c",a[i]);
            for(i=0;i<m;i++)
            printf("%c",b[i]);
        }
    }

	return 0;
}
pl
