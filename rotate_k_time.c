#include<stdio.h>
void main()
{
	int n,k,i,j,temp;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	j=1;
	while(j<=k)
	{
		temp=a[n-1];
		for(i=n-2;i>=0;i--)
		{
			a[i+1]=a[i];
		}
		a[0]=temp;
		j++;
	}
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
