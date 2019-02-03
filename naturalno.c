int main()
{
    int a=0,b=1,temp,i,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("%d ",a);
       temp=a+b;
       a=b;
       b=temp;
   }
   
    return 0;
}
