#include <stdio.h>

int main()
{
     int sum=0,rem,sq,num;
     scanf("%d",&num);
     while(num!=0)
     {
        rem=num%10;
        sq=rem*rem;
        sum=sum+sq;
        num=num/10;
     }
     printf("\n%d",sum);
    return 0;
}
