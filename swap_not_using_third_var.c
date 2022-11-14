//swapping without using third variable
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value for a and b:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d",a,b);
}
