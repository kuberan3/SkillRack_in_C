//array passed as argument
#include<stdio.h>
int sumArray(int[],int);
void main()
{
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d is sum of array elements",sumArray(a,n));
}
int sumArray(int b[],int m)
{
	int sum=0,i;
	for(i=0;i<m;i++)
	{
		sum=sum+b[i];
	}
	return sum;
}
