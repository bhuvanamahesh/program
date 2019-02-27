#include<stdio.h>
#include<conio.h>
int main()
{
    long int k,i;
    scanf("%ld",&k);
    if(k>-32768 && k<32767)
    {
        printf("INT");
    }
    else
    {
        printf("no");
    }
    return 0;
}
