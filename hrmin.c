#include <stdio.h>

int main()
{
    int hr,m,min;
    scanf("%d",&m);
    hr=m/60;
    min=m%60;
    printf("%d\t%d",hr,min);
    return 0;
}
