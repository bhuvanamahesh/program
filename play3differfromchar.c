#include<stdio.h>
void main()
{
char a[100],b[100];
int i,k,n1,n2,c=0;
scanf("%s%s%d",a,b,&k);
n1=strlen(a);
n2=strlen(b);
if(n1==n2)
{
  for(i=0;a[i]!='\0';i++)
  {
     if(a[i]==b[i])
     {
       c=c+0;
     }
     else
    {
       c=c+1;
    }
 }
 if(c==k)
 {
  printf("Yes");
 }
 else
 {
  printf("No");
 }
 else
 {
   printf("No");
 }
}
getch();
}
