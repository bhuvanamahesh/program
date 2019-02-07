#include<stdio.h>
int main()
{
int num,i,c=0;
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
c++;
}
if(c==0)
printf("\n%d is not a composite number",num);
else
printf("\n %d is a composite number",num);
return 0;
}
