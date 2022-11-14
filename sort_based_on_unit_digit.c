/*sorting based on unitdigit*/
#include<stdio.h>
void main()
{
	int n,i,j,temp;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]%10>a[i]%10)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			else if(a[j]%10==a[i]%10)
			{
				if(a[j]<a[i])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				else
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
