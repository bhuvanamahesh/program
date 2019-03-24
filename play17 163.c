#include <stdio.h>
 int main()
{
	int n,s,a[100],i,flag=0;;
	scanf("%d %d",&n,&s); 
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);	
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
  {
	printf("yes");
  }
	else
  {
   printf("no");
   }
return 0;
}
