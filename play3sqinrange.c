#include<stdio.h>
void main()
{
int i,j,n,k,c=0;
scanf("%d%d",&n,&k);
for(i=0;i<=n;i++)
{
for(j=2;j<=n;j++)
{
if((j*j)==i)
{
c=c+1;
}
}
}
printf("%d",c);
getch();
}
