#include<stdio.h>
void main()
{
	int n,i,sum=0,sum1=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
			sum=sum+i;
		if(i%2==0)
			sum1=sum1+i;		
	}
	printf("%d",sum-sum1);
}
