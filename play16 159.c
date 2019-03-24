#include<stdio.h>
int main()
{
    int a,b,rem,i,j=0,a[100],c=0,n;
    scanf("%d %d",&a,&b);
    n=a*b;
    while(n)
    {
        rem=n%2;
        a[j]=r;
        j++;
        n=n/2;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]==1)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
