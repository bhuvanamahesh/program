#include<stdio.h>
int main()
{
    int n,s,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        if(rem%2!=0)
        {
          s=s+rem;
        }
        n=n/10;
    }
    if(s%2==0)
    {
        printf("E");
    }
    else
    printf("O");
   
   return 0;
}
