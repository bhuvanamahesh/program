#include<stdio.h>
int main()
{
    int a[100],i,n,s,c;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    c=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d",s);
            break;
        }
        else
        {
           if((a[i]>c)&&(a[i]<k))
           {
             printf("%d",a[i]);    
           }
           else
           {
             c=a[i];
           }
        }
    }
    return 0;
 }
© 2019 GitHub, Inc.
