//previous k integer
#include<stdio.h>
void main()
{
	int n,k,i;
	scanf("%d %d",&n,&k);
	for(i=n-k;i<=n;i++)
		printf("%d ",i);
}
