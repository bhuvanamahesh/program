#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,c=0,c1=0;
    char a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        l=strlen(a[i]);
        for(j=i+1;j<n;j++)
        {
        m=strlen(a[j]);
        if(l==m)
        {
            for(k=0;k<m;k++)
            {
                if(a[i][k]==a[j][k])
                {
                    c++;
                }
            }
            if(c==m)
            {
                c1=1;
                break;
            }
            else
            {
                c1=0;
            }
        }
           
        }
    }
    if(c1==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
