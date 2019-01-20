#include <stdio.h>

int main()
{
    char k;
    clrscr();
    scanf("%c",&k);
    if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u'||k=='A'||k=='E'||k=='I'||k=='O'||k=='U')
    printf("vowel");
    else
    printf("constant");

    return 0;
}
