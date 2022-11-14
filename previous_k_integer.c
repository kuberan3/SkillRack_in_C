//previous k integer
#include<stdio.h>
void main()
{
	int n,i,k;
	printf("enter value for n,k:");
	scanf("%d%d",&n,&k);
	for(i=n-k;i<=n;i++)
	{
		printf("%d ",i);
	}
}
