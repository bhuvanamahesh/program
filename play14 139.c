#include <stdio.h>
int main()
{
  int n,rem,s=1,b=0,c=0;
   scanf("%d",&n);
   while(n)
   {
       
       rem=n%2;
       if(rem==1)
       {
         c++;
       }
       n=n/2;
       b=b+(rem*s);
       s=s*10;
      
   }
   printf("%d",c);
    return 0;
}
