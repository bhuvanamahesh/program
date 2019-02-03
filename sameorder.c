#include <stdio.h>

int main()
{
    int rem,sum=0,num;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    num=sum;
    while(num!=0)
    {
        rem=num%10;
        printf("%d",rem);
        num=num/10;
    }


    return 0;
}
