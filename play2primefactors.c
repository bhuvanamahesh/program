#include <stdio.h>

int main()
{
     int n,i,c=0,j,k;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	 if(n%i==0)
	 {
	     k=i;
	     count=0;
	     for(j=1;j<=x;j++)
	     {
	         if(k%j==0)
	         {
	             c++;
	         }
	     }
	     if(c==2)
	     {
	         printf("%d ",i); 
	     }
	 }
	}

    return 0;
}
