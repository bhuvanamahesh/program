   #include <stdio.h>

int main()
{
     char a[100],temp;
    int k,n,i,j;
    scanf("%s %d",a,&k);
    n=strlen(a);
    for(i=0;i<k;i++)
    {
        temp=a[n-1];
        for(j=n-2;j>=0;j--)
        {
           a[j+1]=a[j]; 
        }
        a[0]=temp;
    }
    printf("%s",a);

    return 0;
}
