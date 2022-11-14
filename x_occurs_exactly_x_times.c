//x occurs exactly x times
#include<stdio.h>
void main()
{
	int i,n,x,count=0;
	printf("Enter n,x:");
	scanf("%d%d",&n,&x);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			count++;
		}
	}
	if(count==x)
		printf("YEs");
	else
		printf("NO");
}
