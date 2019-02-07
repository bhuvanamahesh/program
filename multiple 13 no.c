#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%13==0)
    {
        printf("multiple of 13");
    }
    else
    {
        printf("not a multiple of 13");
    }
    return 0;
}
