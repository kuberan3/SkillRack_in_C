#include<stdio.h>
void main()
{
	int i,n,j,k=0,a[100],count;
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
			a[k]=i;
			k++;
		}
	}
	printf("\n");
	for(i=2;i<=n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[j]==i)
				break;
		}
		if(j==k)
		{
			printf("%d ",i);
		}
	}
}  
