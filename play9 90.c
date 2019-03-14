#include <stdio.h>

int main()
{
    int i,n,c,res=1,sum=1,ans;
    scanf("%d%d",&c,&n);
    if(c>=n)
    {
    for(i=1;i<=n;i++)
    {
        
         res=res*c;
         sum=sum*i;
         c--;
    }
        ans=res/sum;
        printf("%d",ans);
    }
    else
    {
        printf("Not valid");
    }
    
    

    return 0;
}
