//perfect or not NAWR
#include<stdio.h>
int isPerfect(),n;
void main()
{
	if(isPerfect()==n)
		printf("%d is perfect",n);
	else
		printf("%d is not perfect",n);	
}
int isPerfect()
{
	int sum=0,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	return sum;
}
