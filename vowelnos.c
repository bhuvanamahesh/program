#include <stdio.h>

int main()
{
    
    char a[100];
    int i=0,c=0;
    scanf("%s",&a);
    while(a[i]!='\0')
    {
      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
      {
        c=1;
      }
       i++;
        
    }
    if(c==1)
    {
        printf("yes");
        
    }
    else
    {
        printf("No");
        
    }
        return 0;
    
}


