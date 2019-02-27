#include <stdio.h>

int main()
{   
    int i,j,n,flag=0,a[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                flag=1;
                break;
            }
        }
    }
        if(flag==1)
        {
            printf("no");
        }
        else
        {
            printf("yes");
        }
    
      return 0;
}
