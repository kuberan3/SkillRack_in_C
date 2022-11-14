#include<stdio.h>
void main()
{
	int i,j,n,temp,rev=0,a[10];
	scanf("%d",&n);
	i=0;
	for(temp=n;temp!=0;temp=temp/10)
	{
		a[i]=temp%10;
        i++;		
	}
	for(j=0;j<=i-1;j++)
	{
		
	}
		
	{
		if(rev!=0)
		printf("%d",rev);
		else
		printf("-1");
	}
}
