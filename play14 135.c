#include<stdio.h>
int main()
{
    int a[100],m,n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("yes");
        printf("%d",c);
        
    }
    else
    printf("no");
    return 0;
}
