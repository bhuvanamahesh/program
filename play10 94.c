#include<stdio.h>
int main()
{
    int n,c=0,i,j,r,f=0,a[1000];
    scanf("%d",&n);
    i=0;
    while(n)
    {
      r=n%10;
      a[i]=r;
      i++;
      n=n/10;
      c++;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(a[i]==a[j])
            {
              f=1;
            }
        }
            
    }
    if(f==1)
    printf("yes");
    else
    printf("no");

    return 0;
}
    
    
