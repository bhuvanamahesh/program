#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    int i,j=0,max=0,s=0,l=0,t,f,c,k;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            s++;
        }
        else
        {
            b[j]=s;
            j++;
            s=0;
        }
    }
    b[j]=s;
    j++;
    for(i=0;i<j;i++)
    {
        l++;
        if(max<b[i])
        {
            max=b[i];
            t=l;
            k=i;
        }
    }
    for(i=0;i<k;i++)
    {
        c=c+b[i];
    }
    f=c+t;
    for(i=f-1;i<f+max;i++)
    {
       printf("%c",a[i]);
    }
return 0;
