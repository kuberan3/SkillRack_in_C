#include<stdio.h>
void main()
{
	int i,j,n,count;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count!=2)
		{
			printf("%d ",i);
		}
	}
}
