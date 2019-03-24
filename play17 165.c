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
      if((a[i]>c)&&(a[i]>s))
         {
             printf("%d",a[i]);
             break;
         }
         else
         {
           c=a[i];
         }
    }
           return 0;
}
