#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n;
   scanf("%d",&n);
   for(i=1;i<=100;i++)
   {
       if(n%i==0)
       {
           printf("%d\t",i);
       }
   }
   return 0;
}
