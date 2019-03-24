#include<stdio.h>
int main()
{
    int n,k;
    float c;
    scanf("%d %d",&n,&k);
    if(n>=1 && n<=1000)
    {
        c=n>>k;
    printf("%.2f",c);
    }
    return 0;
}
