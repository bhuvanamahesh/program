#include <stdio.h>

int main()
{
    int i,n,k,a[100],flag=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==k)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
