#include <stdio.h>

int main()
{
    char a[10000];
    int k,i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    k=i;
    for(i=k-1;i>=0;i--)
    printf("%c-",a[i]);

	return 0;
}
