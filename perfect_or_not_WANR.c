//perfect or not using WANR
#include<stdio.h>
void isPerfect(int);
void main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	isPerfect(n);
}
void isPerfect(int m)
{
	int sum=0,i;
	for(i=1;i<=m/2;i++)
	{
		if(m%i==0)
			sum=sum+i;
	}
	if(sum==m)
		printf("%d is perfect",m);
	else
		printf("%d is not perfect",m);
}

