// not ending with 5 or 6
#include<stdio.h>
void main()
{
	int i,n,x,mul,flag=0;
	printf("Enter n,x:");
	scanf("%d%d",&n,&x);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		mul=(a[i]*a[i])+x;
		if(mul%10==5 || mul%10==6)
		{
			continue;
			flag=1;
		}
		printf("%d ",mul);
	}
	if(flag==0)
	{
		printf("-1");
	}
}
