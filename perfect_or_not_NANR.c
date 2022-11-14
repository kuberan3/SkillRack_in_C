//perfect or not NANR
#include<stdio.h>
void isPerfect();
void main()
{
	isPerfect();
}
void isPerfect()
{
	int n,sum=0,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		printf("%d is perfect",n);
	else
		printf("%d is not perfect",n);	
}
