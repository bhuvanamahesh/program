#include<stdio.h>
int main()
{
int a[10],n,i,j,c,t;
scanf("%d %d",&n,&c);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<c;i++)
{
for(j=i+1;j<k;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=c;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
