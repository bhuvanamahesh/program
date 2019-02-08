#include <stdio.h>

int main() 
{
int a,b,rem,gcd;
scanf("%d",&a);
scanf("%d",&b);
do
{
rem=a%b;
if(rem==0)
break;
a=b;
b=rem;
}
while(rem!=0);
gcd=b;
printf("\n%d",gcd);
return 0;
}
