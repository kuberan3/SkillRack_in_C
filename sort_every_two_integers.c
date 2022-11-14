//sort every two element in ascending order
#include<stdio.h>
void main()
{
	int i,n,temp;  
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i=i+2)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
