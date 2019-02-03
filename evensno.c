include <stdio.h>

int main()
{
    int n,a,b;
    scanf("%d%d",&a,&b);
    n=a*b;
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    return 0;
}
