#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d",&a,&b);
if(a==b)
{
  c=pow(a,b);
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
