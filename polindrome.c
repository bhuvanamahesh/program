#include <stdio.h>

int main()
{
    int n=0,num,temp=0,sum=0;
    scanf("%d",&num);
    n=num;
    while(n)
    {
        temp=n%10;
        sum=(sum*10)+temp;
        n=n/10;
    }
    if(sum==num)
    printf("palindrome");
    else
    printf("not polindrome");
    return 0;
}
