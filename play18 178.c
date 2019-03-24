#include <stdio.h>
int main()
{
    char s[100];
    int i,l,j;
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
          if(s[i]==s[j])
          {
             s[j]=toupper(s[j]);   
          }
        }
        s[i]=toupper(s[i]);
    }  
    printf("%s",a);
    return 0;
}
