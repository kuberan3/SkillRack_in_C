//product of digits
#include<stdio.h>
void main()
{
	int i,n,rem,mul,temp;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		mul=1;
		temp=a[i];
		while(temp)
		{
			rem=temp%10;
			mul=mul*rem;
			temp=temp/10;
		}
		printf("%d ",mul);
	}
}
