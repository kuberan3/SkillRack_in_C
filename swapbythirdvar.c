//swapping of two numbers using third variable
#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the value for a and b:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\na=%d b=%d",a,b);
}
