#include<stdio.h>
int main()
{
    int n,a[100],i=0,k,d,t,r,c=1,rem;
    scanf("%d %d %d",&n,&k,&d);
    t=n;
    
    while(t>0)
    {
        t=t/10;
        c=c*10;
    }
    c=c/10;
    while(n>0)
    {
        rem=n/c;
        a[i]=rem;
        i++;
        n=n%c;
        c=c/10;
    }
    while(k>0)
    {
        r=a[d];
        k--;
        d++;
    }
    printf("%d ",r);
    
    return 0;
}
