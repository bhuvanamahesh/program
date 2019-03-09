#include<stdio.h>

int main()
{
    char a[100],b[100];
    int n=0,i,j,count=0;
    scanf("%[^\n]",a);
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
        n=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(b[i]==a[j])
            {
            n++;
            }
        }
    }
        if(n!=0)
        {
            count++;
        }
            printf("%d",count);
    return 0;
}

