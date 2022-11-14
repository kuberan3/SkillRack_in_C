//perfect or not using WAWR
#include<stdio.h>
int isPerfect(int);
void main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	if(isPerfect(n)==n)
		printf("%d is perfect",n);
	else
		printf("%d is not perfect",n);
	
}
int isPerfect(int m)
{
	int sum=0,i;
	for(i=1;i<=m/2;i++)
	{
		if(m%i==0)
			sum=sum+i;
	}
	return sum;
}

