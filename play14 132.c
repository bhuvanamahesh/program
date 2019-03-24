#include<stdio.h>
int main()
{
    char a[100];
    int n,i,c1=0,c=0,k;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        c1++;
         }
         k=c1*c;
         printf("%d",k);

   
   return 0;
}
