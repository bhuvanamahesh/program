 int i,n,k1,k2,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d%d",&k1,&k2);
       if(k1<k2)
       {
           c=c+1;
       }
   }
   printf("%d",c);
   
