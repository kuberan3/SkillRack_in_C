//positive negative series
#include<stdio.h>
void main()
{
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			sum=sum+i;
		else
			sum=sum-i;
	}
	printf("%d",sum);
}
