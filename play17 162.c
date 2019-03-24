#include <stdio.h>
int main() 
{
	char a[100];
	int n,i,j,flag=0,s;
	scanf("%d %d",&n,&s);
	for(i=0;i<n;i++)
	gets(a);
  for(i=0;i<s;i++)
	{
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'||a[j]=='A'||a[j]=='E'||a[j]=='I'||a[j]=='O'||a[j]=='U')
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		break;
	
	}
	if(flag==0)
  {
		printf("no");
	}
	else
  {
		printf("yes");
  }
	return 0;
  }
