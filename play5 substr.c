#include <stdio.h>

int main()
{
     char a[100],b[100];
    int i,flag=0;
    scanf("%s %s",a,b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]=='b'||b[i]=='a'||b[i]=='n'||b[i]=='a'||b[i]=='n'||b[i]=='a')
        {
            flag=1;
        }
        else 
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}
