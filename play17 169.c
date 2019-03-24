int main()
{
	char s[100];
	int l,c,i,j;
  scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		c=1;
		for(j=i;j<l;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				a[j]='\0';
			}
		}
		if(a[i]!='\0');
		printf("%c%d",a[i],c);
	}
}
