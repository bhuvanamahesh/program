#include<stdio.h>
int main()
{
    int n,k,i=0,a[1000],r,j=0,c=0,c1,l;
    scanf("%d %d",&n,&k);
    while(n)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
        c++;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='*';
            }
        }
    }
    j=0;
    while(j<=k)
    {
    for(l=0;l<c;l++)
    {
        if(a[l]!='*'&&a[l]==j)
          {
              
            c1++;
          }  
        
    }
    j++;
    }
    if(c1==k+1)
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }
    return 0;
}
