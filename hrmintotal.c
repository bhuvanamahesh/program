#include <stdio.h>

int main()
{
    int hr,hr1,m,min,min1,h;
    scanf("%d%d%d%d",&hr,&min,&hr1,&min1);
    h=hr1-hr;
    m=min1-min;
    printf("%d\t%d",h,m);
    return 0;
}
