#include <stdio.h>

int main()
{
    char a[10];
    char b[]="kabali";
    int i,j,temp=0,n,n1,k=0,l,c=0;
    n=strlen(b);
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            }
        }
    }
   while(k<n1)
   {
       scanf("%s",a);
       len=strlen(a);
       if(n==l)
       {
           for(i=0;i<n;i++)
           {
               for(j=i+1;j<n;j++)
               {
                   if(a[i]>a[j])
                   {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
               }
           }
           if(strcmp(str,a)==0)
           {
               c++;
           }
       }
       k++;
   }
   printf("%d",c);
    return 0;
}
