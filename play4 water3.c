#include <stdio.h>

int main()
{
    int n,a[10][10],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(a[i-1][j]=='0'&&a[i][j-1]=='0'&&a[i][j+1]=='0'&&a[i+1][j]=='0')
            {
                c++;
            }
        }
    }
    printf("%d",c);
    
    return 0;
}
