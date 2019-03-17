#include <stdio.h>

int main()
{
    char a[100];
    int i;
    scanf("%s",a);
    if(a[3]=='0')
    {
        if(a[4]=='1')
        printf("january");
        else if(a[4]=='2')
        printf("february");
        else if(a[4]=='3')
        printf("march");
        else if(a[4]=='4')
        printf("april");
        else if(a[4]=='5')
        printf("may");
        else if(a[4]=='6')
        printf("june");
        else if(a[4]=='7')
        printf("july");
        else if(a[4]=='8')
        printf("august");
        else if(a[4]=='9')
        printf("september");
    }
        else
        {
        if(a[4]=='0')
        printf("october");
        else if(a[4]=="1")
        printf("november");
        else 
        printf("december");
    }
