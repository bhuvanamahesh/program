#include <stdio.h>

int main()
{
    char a[1000];
    int a1[1000],i,j,n,c=97;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(j=1;j<=26;j++)
    {
        if(a[j]==c)
        {
            printf("%c",a[j]);
            c++;
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=26;j++)
        {
            if(a1[i]==c)
            {
                printf("%c",a[j]);
            }
        }
    }
    printf("\n");
    printf("%d",n-1);
    
    return 0;
}
