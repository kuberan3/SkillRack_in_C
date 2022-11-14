//same elements two array
#include<stdio.h>
void main()
{
	int i,j,n,flag=0;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1-i;j>=n-1-i;j--)
		{
			if(a[i]==b[j])
			{
				printf("%d ",a[i]);
				flag=1;
			}
		}
	}
	if(flag==0)
		printf("-1");
}
