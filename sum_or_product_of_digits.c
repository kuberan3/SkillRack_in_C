//sum or product of digits
#include<stdio.h>
void main()
{
	int n,temp,rem,rem1,sum=0,mul=1;
	printf("enter n:");
	scanf("%d",&n);
	if(n%2==0)
	{
		for(temp=n;temp!=0;temp=temp/10)
		{
			rem=temp%10;
			sum=sum+rem;
		}printf("%d",sum);
	}
	else
	{
		for(temp=n;temp!=0;temp=temp/10)
		{
			rem1=temp%10;
			mul=mul*rem1;
		}
		printf("%d",mul);
	}
}
