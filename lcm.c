#include <stdio.h>

int main() 
{
int a,b,rem,lcm,gcd,c,d;
scanf("%d",&a);
scanf("%d",&b);
c=a;
d=b;
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
lcm=(c*d)/gcd;
printf("\n%d",lcm);
return 0;
}
