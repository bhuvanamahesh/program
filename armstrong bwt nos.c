#include<stdio.h>
int main()
{
    int n1,n2,num,i,rem,temp;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
     num=0,rem=0;
     temp=i ;
        while(temp!=0)
        {
           rem=temp%10;
           num=num+(rem*rem*rem);
           temp=temp/10;
        }
        if(i==num)
           printf("%d ",num);
     }
     return 0;
}
