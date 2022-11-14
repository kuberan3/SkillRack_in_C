//add every two integer
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i]+a[i+1];
		printf("%d ",a[i]);
	}
}
