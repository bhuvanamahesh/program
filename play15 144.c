#include <stdio.h>
int main()
{
int s[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=1;i<n;i++)
{
 if((s[i]%s[i-1])==0)
{
    printf("%d",s[i]);
}
}
return 0;
}
