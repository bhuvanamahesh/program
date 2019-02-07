#include<stdio.h>

int main()
{
  char a[20],c=0,i,n;
  scanf("%s",&a);
  strlen(a);
  if(strlen(a)%2==0)
  {
    c=1;
  }
  else
  {
    c=2;
  }
  if(c==1)
  {
    for(i=0;i<strlen(a);i++)
    {
      n=strlen(a)/2;
      if(i==n)
      {
        a[i]='*';
      }
    }
  }
  printf("%s",a);
}
