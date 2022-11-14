//reverse last x integers
#include<stdio.h>
void main()
{
	int i,n,x;
	printf("Enter n,x:");
	scanf("%d%d",&n,&x);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=n-x;i--)
	{
		printf("%d ",a[i]);
	}
}
