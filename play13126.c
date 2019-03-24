int n,a[1000],i,j,c=0,k,s=0,temp,b[1000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
                c++;
            }
        }
            if(c>=k)
            {
            a[i]='\0';
            }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='\0')
        {
            b[s]=a[i];
            s++;
        }
        
    }
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        printf("%d ",b[i]);
    }

    return 0;
}
