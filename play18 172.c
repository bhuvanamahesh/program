#include <stdio.h>

int main()
{
    int n,a[100],i=0,rem,j,k,temp;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        a[i]=rem;
        i++;
        n=n/10;
    }
    for(j=0;j<i;j++)
    {
       for(k=j+1;k<i;k++)
       {
           if(a[k]>a[j])
           {
               temp=a[j];
               a[j]=a[k];
               a[k]=temp;
           }
       }
    }
    for(j=0;j<i;j++)
    {
    printf("%d",a[j]);
}
    return 0;
}
