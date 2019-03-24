#include<stdio.h>
void main()
{
char a[100];
int i,k,l=0;
scanf("%s %d",a,&k);
l=strlen(a);
for(i=0;i<=l;i++)
{
if(i%k==0)
{
if(a[i-1]>=97 &&a[i-1]<=122)
{
a[i-1]=a[i-1]-32;
}
}
}
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
}
