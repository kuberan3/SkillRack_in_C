//product of x and sum of digits
#include<stdio.h>
void main()
{
	int n,x,temp,rem,sum=0;
	printf("enter value for n,x:");
	scanf("%d%d",&n,&x);
	temp=n;
	while(temp)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	printf("%d",sum*x);
}
