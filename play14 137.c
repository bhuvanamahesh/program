#include<stdio.h>

int main() 
{
   int n,i,sum=0,r=0,b=1,t=0,c=0;
   scanf("%d",&n);
   while(n)
   {
       r=n%2;
       sum=sum+(sum*r);
       b=b*10;
       n=n/2;
   }
  while(sum)
  {
      t=sum%10;
      if(t==1)
      {
          c++;
      }
      sum=sum/10;
  }
  printf("%d",c);
  return 0;
}
