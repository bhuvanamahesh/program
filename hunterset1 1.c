#include <stdio.h>

int main()
{
    int i,j,n,a[1000],b[1000],temp,c=0;;
    scanf("%d",&n);
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
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[i]!='\0';
                printf("%d",a[i]);
                a[j]='\0';
                c++;
                break;
            }
        }
        a[i]='\0';
    }
    if(c==0)
    {
        printf("Unique");
    }

    return 0;
}
