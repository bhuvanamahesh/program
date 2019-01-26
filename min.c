#include<stdio.h>
int main()
{
int i,n,a[i],min;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[1];
for(i=0;i<n;i++)
{
if(a[i]<min)
a[i]=min;
}
printf("%d",min);
return 0;
}
